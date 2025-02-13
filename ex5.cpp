#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int *b;
  int **c;
  b=&a;
  c=&b;
    cout << "value is: " << a << "\n"<< *(&a) << "\n"<< *b << "\n"<< **c << "\n";
    cout << "value of b, address of a: " << b << "\n";
    cout << "value of c, address of b: " << c << "\n";
    cout<<"address of a:"<<&a<<endl<<b<<endl<<*c;
    cout<<"address of b:"<<&b<<endl<<c;
    cout<<"address of c:"<<&c;
    return 0;
}
