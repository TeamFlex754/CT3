#include <iostream>

int main() {

    int num1;
    int num2;
    int num3;

    int* p1 = new int;
    int* p2 = new int;
    int* p3 = new int;

    std::cout << "Enter Number 1:\n";
    std::cin >> num1;
    *p1 = num1;

    std::cout << "Enter Number 2:\n";
    std::cin >> num2;
    *p2 = num2;

    std::cout << "Enter Number 3:\n";
    std::cin >> num3;
   *p3 = num3;

    std::cout << "Number 1: " << num1 << "\n" << std::endl;
    std::cout << "Number 1 Pointer: " << p1 << "\n" << std::endl;

    std::cout << "Number 2: " << num2 << "\n" << std::endl;
    std::cout << "Number 2 Pointer: " << p2 << "\n" << std::endl;

    std::cout << "Number 3: " << num3 << "\n" << std::endl;
    std::cout << "Number 3 Pointer: " << p3 << "\n" << std::endl;

    delete p1;
    delete p2;
    delete p3;

    return 0;
}