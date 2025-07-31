#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s); // Read full line, including spaces and empty lines

    if (s == "ja") {
        cout << "nei\n";
    }
    else if (s == "flott") {
        cout << "omurlegt\n";
    }
    else if (s == "emacs") {
        cout << "vim\n";
    }
    else if (s == "") {
        cout << "no\n"; // or "yes", or "empty", just not empty!
    }
    else {
        // For any other input, just say something different
        cout << "no\n";
    }

    return 0;
}