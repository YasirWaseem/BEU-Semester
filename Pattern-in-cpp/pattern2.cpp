/*
ABCD
ABCD
ABCD
ABCD
*/
//Number of rows is equal to number of coloumn this is square pattern

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter number of rows\n";
    cin >> n;

    for (int i = 0; i < n ; i++)
    {

        char ch = 'A';

        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch +=  1;
        }

        cout << "\n";
    }
    
}
