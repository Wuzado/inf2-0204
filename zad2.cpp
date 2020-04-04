#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    getline(cin, s);
    int i = s.length();

    while(i >= 0) {
        cout << s[i--] << " ";
    }
    cout << endl;
    return 0;
}