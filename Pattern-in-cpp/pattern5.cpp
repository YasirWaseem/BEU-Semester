/*

1
22
333
4444

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

        for(int j = 0; j <= i; j++){
            cout << nums;
        }

        nums++;
        cout << "\n";
    }
}