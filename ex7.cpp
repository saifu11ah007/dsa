#include <iostream>
using namespace std;
int main() {
    int a = 5;
    char b='b';
    float c=5.65;
    int *a1;
    float *c1;
    char *b1;
    a1=&a;b1=&b;c1=&c;
    cout << "address is: " <<a1 << "\n";
    cout << "address is: " <<b1 << "\n";
    cout << "address is: " <<c1 << "\n";
    a1++;b1++;c1++;
    cout << "address is: " <<a1 << "\n";
    cout << "address is: " <<b1 << "\n";
    cout << "address is: " <<c1 << "\n";
    return 0;
}
