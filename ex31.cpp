#include <iostream>

int main() {
    char* arr[] = {
        "riti",
        "niti",
        "kriti",
        "kittu",
        "nitin"
    };

    for (int i = 0; i < 5; i++) {
        std::cout << "address = " << (arr + i) << std::endl;
        std::cout << "string = " << *(arr + i) << std::endl;
    }
}
