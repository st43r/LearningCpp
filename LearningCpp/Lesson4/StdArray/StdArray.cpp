#include "iostream"
#include "array"

struct ConstArray
{
	static const int size = 8;
	std::string name = "Array";

	int array[size]{};

	void SayHello()
	{
		std::cout << "Hello from " << name << ", my size is " << size << std::endl;
	}

};

int main()
{
	/*
		ConstArray a;
		a.name="ASd";
		a.SayHello();
		a.array[0]=55;
	*/

	const size_t size = 10;

	std::array<int, size> array;

	std::cout << array.empty() << "\n";

	array.fill(1);
	std::cout << array.size() << "\n";

	array[2] = 333;
	std::cout << array.at(2) << "\n";



	int array_copy[size];
	for (size_t i = 0; i < size; ++i)
	{
		array_copy[i] = rand() % 10;
	}


	std::copy(array.begin(), array.end(), array_copy);


	auto p = array.data();
	std::cout << p << std::endl;
	std::cout << ++p << std::endl;


	double* d = new double();
	std::cout << d << std::endl;
	std::cout << ++d << std::endl;


	array[0] = 999;


	delete --d;


}