#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int *b;
    b=&a;
    cout << "address is: " << b << "\n";
    cout << "value of b: " << ++b << "\n"<<b++<<"\n"<<b<< "\n"<< --b << "\n"<<b--<< "\n"<<b;
    return 0;
}
