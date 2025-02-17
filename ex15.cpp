
#include <iostream>
using namespace std;

void fun(int *a) {
    for (int i = 0; i < 4; i++) {
        cout << "value of arr[" << i << "] = " << *a << endl;
        cout << "address of arr[" << i << "] = " << a << endl;
        a = a + 1;
    }
}

int main() {
    int arr[4] = {5, 10, 15, 20};
    fun(arr);
    return 0;
}
