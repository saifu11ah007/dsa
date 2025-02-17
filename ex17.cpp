
#include <iostream>
using namespace std;

int main() {
    int i, total = 0;
    int arr[10];
    int *a;
    a = arr;
    
    for (i = 0; i < 10; i++) {
        cout << "Enter the number " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (i = 0; i < 10; i++) {
        cout << *a << " ";
        total = total + *a;
        a = a + 1;
    }
    
    cout << "\nTotal = " << total << endl;
    return 0;
}
