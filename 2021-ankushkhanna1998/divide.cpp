#include <iostream>

inline int divide(const int a, const int b) {
    return (a / b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << divide(a, b) << std::endl;
    return 0;
}
