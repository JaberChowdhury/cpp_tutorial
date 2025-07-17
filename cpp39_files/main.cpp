#include <fstream>
#include <iostream>
#include <json.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;

// Level 4: Review
struct Review {
    string reviewer;
    int    rating;
    string comment;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Review, reviewer, rating, comment)
};

// Level 3: BookCopy
struct BookCopy {
    string         copyId;
    string         condition;
    bool           isAvailable;
    vector<Review> reviews;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(BookCopy, copyId, condition, isAvailable, reviews)
};

// Level 2: BookEdition
struct BookEdition {
    string                isbn;
    int                   year;
    string                publisher;
    map<string, BookCopy> copies; // Key: copyId

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(BookEdition, isbn, year, publisher, copies)
};

// Level 1: BookTitle
struct BookTitle {
    string                   title;
    string                   author;
    map<string, BookEdition> editions; // Key: isbn

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(BookTitle, title, author, editions)
};

// Root: Library
class Library {
  private:
    map<string, BookTitle> catalog; // Key: title+author
    const string           dbFile = "library_db.json";

  public:
    void addSampleData() {
        // Level 1
        BookTitle& title = catalog["Dune|Frank Herbert"];
        title.title      = "Dune";
        title.author     = "Frank Herbert";

        // Level 2
        BookEdition& edition = title.editions["9780441013593"];
        edition.isbn         = "9780441013593";
        edition.year         = 1965;
        edition.publisher    = "Ace Books";

        // Level 3
        BookCopy& copy   = edition.copies["C001"];
        copy.copyId      = "C001";
        copy.condition   = "Good";
        copy.isAvailable = true;

        // Level 4
        Review review1;
        review1.reviewer = "Alice";
        review1.rating   = 5;
        review1.comment  = "Masterpiece!";
        copy.reviews.push_back(review1);

        Review review2;
        review2.reviewer = "Bob";
        review2.rating   = 4;
        review2.comment  = "Great world-building";
        copy.reviews.push_back(review2);
    }

    void saveToFile() {
        json     j = catalog;
        ofstream file(dbFile);
        file << j.dump(2);
        cout << "Data saved to " << dbFile << endl;
    }

    void loadFromFile() {
        ifstream file(dbFile);
        if (!file.is_open()) {
            cout << "No existing database found. Creating new one." << endl;
            return;
        }

        json j;
        file >> j;
        catalog = j.get<decltype(catalog)>();
        cout << "Data loaded from " << dbFile << endl;
    }

    void displayAll() {
        cout << "\n===== Library Catalog =====\n";
        for (const auto& [key, title] : catalog) {
            cout << "\nTitle: " << title.title << " by " << title.author << endl;

            for (const auto& [isbn, edition] : title.editions) {
                cout << "  Edition: ISBN " << isbn << " (" << edition.year << "), " << edition.publisher << endl;

                for (const auto& [copyId, copy] : edition.copies) {
                    cout << "    Copy: " << copyId << " (" << copy.condition << ") - "
                         << (copy.isAvailable ? "Available" : "Checked Out") << endl;

                    for (const auto& review : copy.reviews) {
                        cout << "      Review by " << review.reviewer << ": " << review.rating << "/5 - "
                             << review.comment << endl;
                    }
                }
            }
        }
    }

    void addReview() {
        string title, author, isbn, copyId, reviewer, comment;
        int    rating;

        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter ISBN: ";
        getline(cin, isbn);

        cout << "Enter copy ID: ";
        getline(cin, copyId);

        cout << "Enter your name: ";
        getline(cin, reviewer);

        cout << "Enter rating (1-5): ";
        cin >> rating;
        cin.ignore();

        cout << "Enter your comment: ";
        getline(cin, comment);

        try {
            Review newReview;
            newReview.reviewer = reviewer;
            newReview.rating   = rating;
            newReview.comment  = comment;

            catalog.at(title + "|" + author).editions.at(isbn).copies.at(copyId).reviews.push_back(newReview);

            cout << "Review added successfully!\n";
        } catch (...) {
            cout << "Error: Couldn't find the specified book edition/copy\n";
        }
    }
};

void displayMenu() {
    cout << "\n===== Library Management System =====\n";
    cout << "1. View Catalog\n";
    cout << "2. Add Review\n";
    cout << "3. Save Data\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    Library library;
    library.loadFromFile();

    // Add sample data if empty
    if (library.getCatalog().empty()) {
        library.addSampleData();
    }

    int choice;
    do {
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            library.displayAll();
            break;
        case 2:
            library.addReview();
            break;
        case 3:
            library.saveToFile();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
