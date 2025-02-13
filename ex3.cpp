#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int *b;
    b=&a;
    cout << "value is: " << a << "\n";
    cout << "value is: " << *b << "\n";
    cout << "address is: " << &a << "\n";
     cout << "address is: " << b << "\n";
    cout << "value address is: " << *(&a) << "\n";
    return 0;
}
