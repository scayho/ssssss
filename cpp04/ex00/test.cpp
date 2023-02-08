#include <iostream>
#include <string_view>

class Base
{
    public:
        virtual std::string_view getName() const { return "Base"; }
        std::string_view getc7() const { return "ahdjgbfhsnzx"; }
};

class Derived: public Base
{
    public:
        std::string_view getName() const { return "Derived"; }
        std::string_view getc7() const { return "siuuuuuuuu"; }
};

int main()
{
    Derived derived;
    Base &rBase = derived;
    std::cout << "rBase is a " << derived.getName() << '\n';
    std::cout << "========================" << std::endl;

    std::cout << "rBase is a " << rBase.getName() << '\n';
    std::cout << "rBase is a " << rBase.getc7() << '\n';

    return 0;
}
