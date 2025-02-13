#include <iostream>
using namespace std;

void swap(int *p, int *q);

int main() {
    int a = 5;
    int b = 7;
    cout << "before function call: " << a << "\t" << b << endl;
    swap(&a, &b);
    cout << "after function call: " << a << "\t" << b << endl;
    return 0;
}
void swap(int *p, int *q) {
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
    cout << "function call: " << *p << "\t" << *q << endl;
}
