#include <iostream>


int main()
{
	const size_t size = 10;

	int array[size];
	//  array[]{1,2,3,4};
	//  array[] = {0, -6, 3, 22, 55} - size = 5


	for (size_t i = 0; i < size; ++i)
	{
		array[i] = rand() % 10;
	}

	int array_copy[size];
	for (size_t i = 0; i < size; ++i)
	{
		array_copy[i] = array[i];
	}

	array_copy[0] = 999;
	array[0] = 777;

	std::cout << "Original array:\n";
	for (size_t i = 0; i < size; ++i)
	{
		std::cout << array[i] << " ";
		// array[i] = 0x7fff975ff060 + i * sizeof(int)
	}

	std::cout << "\n";

	std::cout << "Copy array:\n";
	for (size_t i = 0; i < size; ++i)
	{
		std::cout << array_copy[i] << " ";
	}


	// auto f = log(size); f = 2.3025850929940459
	// int t = log(size); t = 2

}