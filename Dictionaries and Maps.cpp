#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT
    unordered_map<string, long> phonebook;

    int n;
    cin >> n; // Number of entries

    // Populate the phone book
    for (int i = 0; i < n; ++i) {
        string name;
        long phone;
        cin >> name >> phone;
        phonebook[name] = phone;
    }

    // Query the phone book
    string query;
    while (cin >> query) {
        if (phonebook.find(query) != phonebook.end()) {
            cout << query << "=" << phonebook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
