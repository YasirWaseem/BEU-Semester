/*

1
2 3
4 5 6
7 8 9 10

*/
// Print the pattern given above

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter number of rows\n";
    cin >> n;

    int nums = 1;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < i + 1; j++){
            cout << nums << " ";
            nums++;
         }

        cout << "\n";
    }
}