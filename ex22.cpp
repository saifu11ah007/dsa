#include <iostream>
using namespace std;
int main() {
    int *arr[3];
    int a = 5, b = 10, c = 15;

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for (int i = 0; i < 3; i++) {
        cout << "address = " << arr[i] << " value = " << *(arr[i]) << endl;
    }
}
