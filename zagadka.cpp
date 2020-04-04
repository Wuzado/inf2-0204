#include<iostream>
using namespace std;

int main() {
	int liczba, suma = 0;
	cin >> liczba;
	while(liczba > 0) {
		suma = suma + liczba % 10;
		liczba = liczba / 10;
	}
	cout << suma;
    return 0;
}