#include <iostream>

inline int difference(const int a, const int b) {
    return (a - b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << difference(a, b) << std::endl;
    return 0;
}
