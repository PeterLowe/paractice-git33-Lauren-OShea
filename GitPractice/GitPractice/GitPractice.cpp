//lauren


#include <iostream>



int main()
{
	int number = 0;
	const int TWO = 2;
	int result = 0;

	std::cout << "Please enter a number: ";
	std::cin >> number;

	result = number % TWO;

	if (result == 0)
	{
		std::cout << "Your number is even :( " << std::endl;
	}
	else
	{
		std::cout << "Your number is odd!" << std::endl;
	}
}

