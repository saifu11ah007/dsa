#include <iostream>
using namespace std;
int main() {
    char a = 'p';
    char *b;
    int c=5;
    int *d;
    float e=5.5;
    float *f;
    d=&c;
    f=&e;
    b=&a;
    cout << "value is: " << a << "\n";
    cout << "value is: " << *b << "\n";
    cout << "address is: " << &a << "\n";
     cout << "address is: " << b << "\n";
    cout << "value address is: " << *(&a) << "\n";
    return 0;
}
