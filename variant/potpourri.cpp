#include <iostream>
#include <variant>

struct S { operator int() { throw 42; }};

int main()
{
	std::variant<float, int> v{12.f};
	try
	{
		v.emplace<1>(S());
	}
	catch (int)
	{
		std::cerr << "Got an excpetion"<< std::endl;
	}

	if (v.valueless_by_exception())
		std::cerr << "Truly exceptional" << std::endl;
	return 0;
}


