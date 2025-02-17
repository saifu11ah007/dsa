#include <iostream>
using namespace std;
int main() {
    char arr[] = "reeta";
    for (int i = 0; arr[i] != '\0'; i++) {
        cout << "address = " << (void*)&arr[i] << " character = " << arr[i] << endl;
    }
}
