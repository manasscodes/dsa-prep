/* 

*
**
***
****
*****

*/

#include <iostream>
using namespace std;

void printStarPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

int main(){
    printStarPattern(5);
    return 0;
}
