//Release 2.0
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
			summary(a,b);
			break;
		case 2:
			subt(a,b);
			break;
		case 3:
			div(a,b);
			break;
		case 4:
			mult(a,b);
			break;
		}

		std::cout << "Result = " << result << std::endl;
	} while (choose != 0);

	return 0;
}