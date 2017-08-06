#include <iostream>
#include <optional>

int main()
{
    std::optional<bool> o(false);
    //std::optional<bool> o(true);
    //std::optional<bool> o;
    if (o)
        std::cout << "if (o)" << std::endl;
    if (!o)
        std::cout << "if (!o)" << std::endl;
	if (o == false)
        std::cout << "if (o == false)" << std::endl;
	if (o == true)
        std::cout << "if (o == true)" << std::endl;
    return 0;
}

