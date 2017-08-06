#include <iostream>
#include <optional>

int main()
{
    std::optional<int> o(0);
    //std::optional<int> o(42);
    //std::optional<int> o;
    if (o)
        std::cout << "if (o)" << std::endl;
    if (!o)
        std::cout << "if (!o)" << std::endl;
	if (o == 0)
        std::cout << "if (o == 0)" << std::endl;
	if (o == 42)
        std::cout << "if (o == 42)" << std::endl;
    return 0;
}

