#include "array"
#include "iostream"


template <typename T>
void PrintArray(const T& array, const size_t& size)
{
	for (size_t i = 0; i < size; ++i)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;
}


template <typename T, typename V>
void Edit(T array, const V& value)
{
	array[0] = value;
}

template <typename T, typename V>
void EditRef(T& array, const V& value)
{
	array[0] = value;
}


int main()
{
	const size_t size = 10;

	std::array<int, size> array;
	int arr[size];

	PrintArray(array, array.size());

	// Edit(array, 'c'); - won't do anything to our array
	EditRef(array, 'c');

	PrintArray(array, array.size());
}