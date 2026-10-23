#include <iostream>

int main() {
    double a, b;
    char op;

    
    std::cout << "";
    std::cin >> a >> op >> b;

    switch (op) {
        case '+': std::cout << "Ответ: " << a + b; break;
        case '-': std::cout << "Ответ: " << a - b; break;
        case '*': std::cout << "Ответ: " << a * b; break;
        case '/': std::cout << "Ответ: " << a / b; break;
        default:  std::cout << "Неверный знак!";  break;
    }

    return 0;
}