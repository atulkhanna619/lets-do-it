#include <iostream>

inline int product(const int a, const int b) {
    return (a * b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << product(a, b) << std::endl;
    return 0;
}
