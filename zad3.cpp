#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i;
	string a, b;
	cin >> i;

	while(i--) {
		cin >> a;
		b = a;
		reverse(a.begin(), a.end());
		if(a == b) {
            cout << "t" << endl;
        } else {
            cout << "n" << endl;
        }
	}
    return 0;
}