/*
1234
1234
1234
1234
*/
//Number of rows should be equal to number of coloumn this is square pattern

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter number of rows\n";
    cin >> n;

    for (int i = 0; i < n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }

        cout << "\n";
    }
    
}
