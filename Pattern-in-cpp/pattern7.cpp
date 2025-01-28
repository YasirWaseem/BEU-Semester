/*

1
21
321
4321

*/
// Print the pattern given above

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter number of rows\n";
    cin >> n;

    for(int i = 0; i < n; i++){

        for(int j = i + 1; j > 0; j--){

            cout << j << " ";
            
        }

        cout << "\n";
    }
}