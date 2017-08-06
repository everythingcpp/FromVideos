#include <iostream>
#include <optional>

int main()
{
	std::optional<int> i(42);
	std::cout << "Before: " << i.value() << std::endl;
	++i.value();
	std::cout << "After: " << i.value() << std::endl;

	i.reset();
	if (i.has_value())
		std::cout << "Filled" << std::endl;
	else
		std::cout << "Empty" << std::endl;

	return 0;
}

