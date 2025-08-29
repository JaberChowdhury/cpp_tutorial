#include <iostream>
#include <vector>
using namespace std;

class User {
  public:
    string name, password, id;
    float  balance;
    User(string name, string password, string id, float initial_balance) {
        this->name     = name;
        this->password = password;
        this->balance  = initial_balance;
        this->id       = id;
    }
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited " << amount << " tk. New balance: " << balance << endl;
    }
    void withDraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Current: " << balance << endl;
        } else {
            balance -= amount;
            cout << "You withdrew " << amount << " tk. Remaining: " << balance << endl;
        }
    }
    void checkBalance() { cout << "Balance: " << balance << endl; }
    void checkInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Menu {
  public:
    int selected;
    Menu(vector<string>& options) {
        vector<string> opts = options;
        opts.push_back("Exit");
        while (true) {
            cout << "\n========= MENU =========\n";
            for (int i = 0; i < opts.size(); i++) {
                cout << "[" << i << "] : " << opts[i] << endl;
            }
            cout << "Select option (0-" << opts.size() - 1 << "): ";
            if (!(cin >> selected)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input! Try again.\n";
                continue;
            }
            if (selected == opts.size() - 1) {
                cout << "Program stopped.\n";
                exit(0);
            }
            if (selected >= 0 && selected < opts.size() - 1) {
                break;
            } else {
                cout << "Invalid option! Try again.\n";
            }
        }
    }
};

class Bank {
  public:
    string       password = "12345";
    vector<User> users;
    void         addUser(User u) { users.push_back(u); }
    void         removeUser(string id) {
        vector<User> filtered;
        for (auto& user : users) {
            if (user.id != id)
                filtered.push_back(user);
        }
        users = filtered;
        cout << "User with ID " << id << " removed (if existed).\n";
    }
    void allUsers() {
        for (auto& user : users) {
            cout << "=======================" << endl;
            user.checkInfo();
            cout << "=======================" << endl;
        }
    }
    User* findUser(string id, string pass) {
        for (auto& user : users) {
            if (user.id == id && user.password == pass) {
                return &user;
            }
        }
        return nullptr;
    }
};
Bank bank_cse_70;

void BankAuth() {
    string pass;
    cout << "Enter Bank Admin password: ";
    cin >> pass;
    if (pass != bank_cse_70.password) {
        cout << "Wrong password!\n";
        return;
    }
    cout << "Admin login successful!\n";

    while (true) {
        vector<string> opt = {"Add User", "Remove User", "View All Users", "Back"};
        Menu           m(opt);
        switch (m.selected) {
        case 0: {
            string name, id, pass;
            float  bal;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Password: ";
            cin >> pass;
            cout << "Enter Initial Balance: ";
            cin >> bal;
            bank_cse_70.addUser(User(name, pass, id, bal));
            cout << "User added!\n";
            break;
        }
        case 1: {
            string id;
            cout << "Enter ID to remove: ";
            cin >> id;
            bank_cse_70.removeUser(id);
            break;
        }
        case 2:
            bank_cse_70.allUsers();
            break;
        case 3:
            return;
        }
    }
}

void userAuth() {
    string id, pass;
    cout << "Enter User ID: ";
    cin >> id;
    cout << "Enter Password: ";
    cin >> pass;
    User* u = bank_cse_70.findUser(id, pass);
    if (!u) {
        cout << "Invalid ID or Password.\n";
        return;
    }
    cout << "User login successful!\n";

    while (true) {
        vector<string> opt = {"Deposit", "Withdraw", "Check Balance", "Check Info", "Back"};
        Menu           m(opt);
        switch (m.selected) {
        case 0: {
            float amt;
            cout << "Enter amount to deposit: ";
            cin >> amt;
            u->deposit(amt);
            break;
        }
        case 1: {
            float amt;
            cout << "Enter amount to withdraw: ";
            cin >> amt;
            u->withDraw(amt);
            break;
        }
        case 2:
            u->checkBalance();
            break;
        case 3:
            u->checkInfo();
            break;
        case 4:
            return;
        }
    }
}

void init() {
    while (true) {
        vector<string> opt = {"Bank Admin", "Bank User"};
        Menu           m(opt);
        if (m.selected == 0)
            BankAuth();
        else if (m.selected == 1)
            userAuth();
    }
}

int main() {
    bank_cse_70.addUser(User("Alice", "1111", "U001", 1000));
    bank_cse_70.addUser(User("Bob", "2222", "U002", 5000));
    init();
}
