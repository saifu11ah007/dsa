
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {5, 10, 15, 20};
    int *b = arr; // b = &arr[0]
    
    for (int i = 0; i < 4; i++) {
        cout << "value of arr[" << i << "] = " << *b << endl;
        cout << "address of arr[" << i << "] = " << b << endl;
        b = b + 1;
    }
    return 0;
}
