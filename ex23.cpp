#include <iostream>
using namespace std;
int main() {
    static int arr[4] = {5, 10, 15, 20};
    static int *a[4] = {arr, arr+1, arr+2, arr+3};
    int *b;
    b = a[0];
    for (int i = 0; i < 4; i++) {
        cout << "address = " << b << " value = " << *b << endl;
        b = b + 1;
    }
}
