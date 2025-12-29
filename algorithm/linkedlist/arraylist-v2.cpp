#include <iostream>
using namespace std;

int main() {
    int  link[6], start, avail, ptr;
    int  loc, newloc, choice;
    char info[6];

    // -------- INITIAL LIST INPUT --------
    cout << "start: ";
    cin >> start;
    ptr = start;

    while (ptr != 0) {
        cout << "Info: ";
        cin >> info[ptr];
        cout << "Link: ";
        cin >> link[ptr];
        ptr = link[ptr];
    }

    // -------- AVAIL LIST INPUT --------
    cout << "avail: ";
    cin >> avail;
    ptr = avail;

    while (ptr != 0) {
        cout << "Link: ";
        cin >> link[ptr];
        ptr = link[ptr];
    }

    do {
        cout << "\n\n1. Insert Node";
        cout << "\n2. Delete Node";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        // -------- INSERT --------
        if (choice == 1) {
            if (avail == 0) {
                cout << "\nOverflow! No free node available.";
            } else {
                newloc = avail;
                avail  = link[avail];

                cout << "Input info for new node: ";
                cin >> info[newloc];

                cout << "Input 0 to insert at beginning, otherwise location of previous node: ";
                cin >> loc;

                if (loc == 0) {
                    link[newloc] = start;
                    start        = newloc;
                } else {
                    link[newloc] = link[loc];
                    link[loc]    = newloc;
                }
            }
        }

        // -------- DELETE  --------
        else if (choice == 2) {
            if (start == 0) {
                cout << "\nUnderflow! List is empty.";
            } else {
                cout << "Input location of node to delete: ";
                cin >> loc;

                if (loc == start) // delete first node
                {
                    start = link[start];
                } else {
                    ptr = start;
                    while (ptr != 0 && link[ptr] != loc)
                        ptr = link[ptr];

                    if (ptr == 0) {
                        cout << "\nInvalid location!";
                        continue;
                    }

                    link[ptr] = link[loc];
                }

                // add deleted node to avail list
                link[loc] = avail;
                avail     = loc;
            }
        }

        else if (choice == 3) {
            cout << "\nExiting program...";
        }

        else {
            cout << "\nInvalid choice!";
        }

        // -------- DISPLAY LIST --------
        ptr = start;
        cout << "\n\nCurrent List:";
        while (ptr != 0) {
            cout << "\nInfo [" << ptr << "] : " << info[ptr] << "  Link [" << ptr << "] : " << link[ptr];
            ptr = link[ptr];
        }

        // -------- DISPLAY AVAIL --------
        ptr = avail;
        cout << "\navail";
        while (ptr != 0) {
            cout << " -> " << ptr;
            ptr = link[ptr];
        }

    } while (choice != 3);

    return 0;
}
