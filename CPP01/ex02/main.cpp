#include <iostream>
#include <string>

int main (void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str; // mesmo espaco de memoria que str

    std::cout << "Address of the string: " << &str << std::endl;
    std::cout << "Address of the pointer: " << &ptr << std::endl;
    std::cout << "Address of the reference: " << &ref << std::endl;
    std::cout << "String: " << str << std::endl;
    std::cout << "Pointer: " << *ptr << std::endl;
    std::cout << "Reference: " << ref << std::endl;
    return (0);
}