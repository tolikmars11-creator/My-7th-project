#include <iostream>

//  для задания N№ 2
void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main() 
{
    // задание N№ 1
    int i;
    short s;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    bool b;

    std::cout << "int: " << &i << " " << sizeof(i) << std::endl;
    std::cout << "short: " << &s << " " << sizeof(s) << std::endl;
    std::cout << "long: " << &l << " " << sizeof(l) << std::endl;
    std::cout << "long long: " << &ll << " " << sizeof(ll) << std::endl;
    std::cout << "float: " << &f << " " << sizeof(f) << std::endl;
    std::cout << "double: " << &d << " " << sizeof(d) << std::endl;
    std::cout << "long double: " << &ld << " " << sizeof(ld) << std::endl;
    std::cout << "bool: " << &b << " " << sizeof(b) << std::endl;

    std::cout << "\n\n\n";
    // задание N№ 2

    int a = 5, p = 8;

    std::cout << "a = " << a << ", p = " << p << std::endl;

    swap(a, p);

    std::cout << "a = " << a << ", p = " << p << std::endl;

    std::cout << "\n\n\n";
    return 0;
}