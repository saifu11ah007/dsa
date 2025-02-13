#include <iostream>
using namespace std;

int *fun(int **p);

int main() {
    int a = 5;
    int *b;
    int *fun();
    b=&a;
    cout << "before function call: "<<b << endl;
    b=fun(&b);
    cout << "after function call: " <<b << endl;
    return 0;
}
int *fun(int **p) {
    *p=*p+1;
    return *p;
}
