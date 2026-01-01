/* 

****
****
****
****

*/
#include <iostream>
using namespace std;

int pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }   
}


int main() {
    pattern(4);
    return 0;
}