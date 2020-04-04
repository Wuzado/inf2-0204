#include <iostream>
#include <string>
using namespace std;

int main() {
    int maxNum[1000], minNum[1000];
    int lineCount;
    string linia;
    string temp, temp2;
    int i, p;
    while(true) {
        linia = "";
        temp = "";
        i = 0;
        
        getline(cin, linia);
        if(!linia.empty()) {
            while(i <= linia.length()) {
                if(linia[i] == ' ') {
                    temp2 = temp;
                    temp = "";
                    i++;
                } else if(i == linia.length()) {
                    if(stoi(temp2) > stoi(temp)) {
                        maxNum[lineCount] = stoi(temp2);
                        minNum[lineCount] = stoi(temp);
                    } else {
                        maxNum[lineCount] = stoi(temp);
                        minNum[lineCount] = stoi(temp2);                        
                    }
                    break;
                } else {
                    temp.push_back(linia[i]);
                    i++;
                }
            }
        } else {
            break;
        }

        lineCount++;
    }

    while(p < lineCount) {
        cout << maxNum[p] << " " << minNum[p] << endl;
        p++;
    }
    
    return 0;
}