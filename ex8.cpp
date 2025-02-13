#include <iostream>
using namespace std;

void value(int p, int q);

int main() {
    int a = 5;
    int b = 7;
    cout << "before function call: " << a << "\t" << b << endl;
    value(a, b);
    cout << "after function call: " << a << "\t" << b << endl;
    return 0;
}
void value(int p, int q) {
    p++; q++;
    cout << "function call: " << p << "\t" << q << endl;
}
