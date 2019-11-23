#include <iostream>
#include "Long.h"

int main() {
    Long a, b;

    std::cout << "Введите первое число: ";
    a.read(std::cin);
    std::cout << '\n';
    std::cout << "Введите второе число: ";
    b.read(std::cin);
    std::cout << '\n';

    std::cout << "Первое число: ";
    a.write(std::cout);
    std::cout << '\n';
    std::cout << "Второе число: ";
    b.write(std::cout);
    std::cout << '\n';

    Long sum = a.add(b);
    std::cout << "Сумма чисел: ";
    sum.write(std::cout);
    std::cout << '\n';

    Long razn = a.sub(b);
    std::cout << "Разность чисел: ";
    razn.write(std::cout);
    std::cout << '\n';

    Long umn = a.mult(b);
    std::cout << "Произведение чисел: ";
    umn.write(std::cout);
    std::cout << '\n';

    Long del = a.div(b);
    std::cout << "Частное чисел: ";
    del.write(std::cout);
    std::cout << '\n';

    if (a.less(b)) std::cout << "Первое число меньше второго" << std::endl;

    if (a.more(b)) std::cout << "Первое число больше второго" << std::endl;

    if (a.equal(b)) std::cout << "Числа равны" << std::endl;
}
