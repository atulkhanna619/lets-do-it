#include <iostream>

inline int sum(const int a, const int b) {
    return (a + b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << sum(a, b) << std::endl;
    return 0;
}
