#include "erased.h"
#include <iostream>

struct Link {
	void printName() const {
		std::cout << "Link" << std::endl;
	}
};

struct Zelda {
	void printName() const {
		std::cout << "Zelda" << std::endl;
	}
};

int main()
{
	TypeErased te{Link()};
	te.printName();
	te = Zelda();
	te.printName();

	return 0;
}

