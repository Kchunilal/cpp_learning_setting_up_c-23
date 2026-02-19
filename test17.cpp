#include <iostream>
#include <optional>

int main()
{
    std::optional<int> opt = 42;

    if (opt.has_value())
    {
        std::cout << "C++17 works! Value = " << opt.value() << std::endl;
    }
    else
    {
        std::cout << "No value" << std::endl;
    }

    return 0;
}