#include <iostream>
using namespace std;
int main() {
    char arr[] = "reena";
    char *a = arr;
    while (*a != '\0') {
        cout << "address = " << (void*)a << " character = " << *a << endl;
        a = a + 1;
    }
}
