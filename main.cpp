#include "funcs.h"

int main()
{
	int choose = -1;
	float result = 0, a, b;

	
	do {
		std::cout << "Hi, please choose function (1-sum, 2-min, 3-div, 4-mult, 0 to exit): ";

		std::cin >> choose;

		if (choose == 0)
			return 0;

		std::cout << "Enter 2 digits with space: ";

		std::cin >> a >> b;

		switch (choose)
		{
		case 1:
			std::cout << "This feature is under development";
			break;
		case 2:
			std::cout << "This feature is under development";
			break;
		case 3:
			std::cout << "This feature is under development";
			break;
		case 4:
			std::cout << "This feature is under development";
			break;
		}

		std::cout << "Result = " << result << std::endl;
	} while (choose != 0);

	return 0;
}