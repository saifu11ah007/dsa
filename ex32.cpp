#include <iostream>

int main() {
    char arr[5][10] = {
        "riti",
        "niti",
        "kriti",
        "kittu",
        "nitin"
    };

    for (int i = 0; i < 5; i++) {
        std::cout << "base address = " << &arr[i] << std::endl;
        std::cout << "string = " << arr [i] << std::endl;
    }
}
