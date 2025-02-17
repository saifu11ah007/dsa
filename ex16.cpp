
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {5, 10, 15, 20};
    for (int i = 0; i < 4; i++) {
        cout << "value of arr[" << i << "] = " << *(arr + i) << endl; 
    }
    return 0;
}
