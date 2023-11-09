#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int *ptrA = &a;
    int *ptrB = &b;

    std::cout << "Antes del intercambio: a = " << a << ", b = " << b << std::endl;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << "Después del intercambio: a = " << a << ", b = " << b << std::endl;

    return 0;
}