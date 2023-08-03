#include <iostream>
#include <array>

unsigned short s = 5;
long long  l = 77777777;

typedef unsigned short ushort;
typedef long long llong;

ushort s1 = 5;
llong l1 = 77777777;

typedef int* ptr;

int main()
{
	/*const unsigned int size = 5;

	int arr[5] = { 1,2,3,-7,0 };
	int arr[] = { 1,2,3,-7,0 };
	int arr[1000] = {};
	int arr[size]{ 1,2,3,-7,0 };

	int temp = arr[size - 1];

	for (size_t i = size - 1; i > 0; --i)
	{
		arr[i] = arr[i - 1];
	}

	arr[0] = temp;*/

	const unsigned int size = 5;

	std::array<int, size> arr { 1, 2, 3, -7, 100 };

	// arr.fill(77);
	// arr.size();


	// std::cout << arr.at(3) << std::endl;
	// std::cout << arr.at[3] << std::endl; don't throw exception
	// std::cout << arr.back() << std::endl;

	int temp = arr.back();

	for (size_t i = arr.size() - 1; i > 0; --i)
	{
		arr.at(i) = arr.at(i - 1);
	}


	arr.at(0) = temp;

	// std::cout << arr._Elems << std::endl;

	for (const int number : arr)
	{
		std::cout << number << "\t";
	}
}