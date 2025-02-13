#include <iostream>
using namespace std;
int main() {
    int a = 5;
    cout << "value is: " << a << "\n";
    cout << "address is: " << &a << "\n";
    cout << "value address is: " << *(&a) << "\n";
    return 0;
}
