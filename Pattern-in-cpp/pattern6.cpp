/*

1
12
123
1234

*/
// Print the pattern given above

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter number of rows\n";
    cin >> n;

    
    for(int i = 0; i < n; i++){

        int nums = 1;

        for(int j = 0; j <= i; j++){
            cout << nums;
            nums++;
        }

        cout << "\n";
    }
}