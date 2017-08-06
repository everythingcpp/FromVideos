#include <iostream>
#include <variant>
#include <vector>

template<typename... Fns> struct overloaded : Fns... { using Fns::operator()...; };
template<typename... Fns> overloaded(Fns...) -> overloaded<Fns...>;

using MyVariant = std::variant<int, std::string>;

int main()
{
	std::vector variants {
		MyVariant{10},
		MyVariant{char(11)},
		MyVariant{12.5f},
		MyVariant{"13"},
		MyVariant{std::string("14")}
	};
	for (auto v : variants)
		std::visit(
			overloaded{
				[](int x) { std::cout << "Got " << x << " as int" << std::endl; },
				[](std::string str) { std::cout << "Got " << str << " as str" << std::endl; }},
			v);
	return 0;
}

