// Example 20: Program to print the elements of the array
#include <iostream>
using namespace std;

int main() {
    int arr[3][2] = { {10, 100}, {20, 200}, {30, 300} };
    int i, j;

    for (i = 0; i < 3; i++) {
        cout << endl;
        for (j = 0; j < 2; j++) {
            cout << "Value = " << (*(arr + i) + j) << endl;
        }
    }

    return 0;
}
