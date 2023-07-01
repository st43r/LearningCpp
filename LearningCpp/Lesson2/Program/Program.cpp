#include <iostream>
#include <string>


int StringToInteger(std::string stringNumber)
{
	int number = 0;

	size_t length = stringNumber.length();

	size_t j = 0;

	for (int i = length - 1; i >= 0; --i)
	{
		if (isdigit(stringNumber[i]))
		{
			number += (stringNumber[i] - 48) * pow(10, j);
			++j;
		}
	}

	// 12345
	// 
	// 10000 [0] = 1 * pow(10,4)
	// 2000 [1] = 2 * pow(10,3)
	// 300 [2] = 3 * pow(10,2)
	// 40 [3] = 4 * pow(10,1)
	// 5 [4] = 5 * pow(10,0)

	return number;
}

int main()
{
	std::string number;

	getline(std::cin, number);


	std::cout << "Our number is " << StringToInteger(number) + 7 - 220;


	return 0;
}