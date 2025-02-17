// Example 18: Program to accept 10 numbers and sort them with use of pointer
#include <iostream>
using namespace std;

void swap(int *b, int *c) {
    int temp;
    temp = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int i, j;
    int arr[10];
    int *a;
    a = arr;

    for (i = 0; i < 10; i++) {
        cout << "Enter the number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Before sorting:\n";
    for (i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    cout << "After sorting:\n";
    for (i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
