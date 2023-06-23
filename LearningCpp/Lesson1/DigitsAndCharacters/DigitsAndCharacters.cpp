#include <iostream>
#include <string>

bool IsDigit(int code)
{
	return code >= 48 && code < 58;
}

std::string IntToBin(int number);

int main()
{
	using namespace std;


	/*char c = '5';
	char c1 = '0';

	int a = 5;
	int b = 0;

	int d = c-48;
	char e = a+48;

	cout << c << " " << c1 << endl;

	cout << a << " " << b << endl;

	cout << d << " " << e << endl;*/


	/*string line = "543234";

	int number = 543234;


	string res1 = to_string(number);
	int res2 = stoi(line);


	cout << "String is " << res1<<endl;
	cout << "Int is " << res2<<endl;*/


	/*string line;

	cout << "Enter a string:\n";
	//cin >> line; // WRONG!
	getline(cin,line);

	cout << line << " length is " << line.length() << endl;*/


	/*string text;
	getline(cin, text);

	string numb = "";

	for (size_t i = 0; i < text.length(); ++i)
	{
		// isspace((int)char), isdigit((int)char), isalpha((int)char)
		if (isalpha(text[i]) || isspace(text[i]))
		{
			cout<< text[i];
		}
	}

	//int number1=stoi(text);
	//int number2=stoi(numb);

	//cout << number1 << "\t" << number2;*/


	/*string line;

	getline(cin, line);

	int number = stoi(line,nullptr,2);

	cout << number << endl;*/


	int number;

	cin >> number;

	cout << IntToBin(number) << endl;
}

std::string IntToBin(int number)
{
	std::string result = std::string(log(number) / log(2) + 1, '0');

	for (size_t i = result.length() - 1; i >= 0 && number; i--)
	{
		result[i] = number % 2 + 48;
		number /= 2;
	}

	//std::reverse(result.begin(), result.end());

	return result;
}




