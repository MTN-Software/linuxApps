#include <iostream>

/*=========Prototypes=========*/
int add(int numOne, int numTwo);
int sub(int numOne, int numTwo);
int mult(int numOne, int numTwo);
int div(int numOne, int numTwo);
int sqrt(int numOne);

/*=========Main=========*/
int main()
{
	int one,two;
	std::cout << "Input First Number: ";
	std::cin >> one;
	std::cout << "Input Second Number: ";
	std::cin >> two;
	
	int added = add(one, two);
	int subbed = sub(one, two);
	int multied = mult(one, two);
	int dived = div(one, two);
	int sqrtOne = sqrt(one);
	int sqrtTwo = sqrt(two);

	//TODO
	return 0;
}

/*=========Definitions=========*/

int add(int numOne, int numTwo)
{
	return numOne + numTwo;
}

int sub(int numOne, int numTwo)
{
	return numOne - numTwo;
}

int mult(int numOne, int numTwo)
{
	return numOne * numTwo;
}

int div(int numOne, int numTwo)
{
	return numOne / numTwo;
}

int sqrt(int numOne)
{	
	double temp;
	x0 = 3 * (10*10); // x0 = 3 * (10^2)

	for (int i = 1; i < 3; i++) {
		temp = 0.5(x0 + (numOne/x0));
	}
	int ret = (int)temp;
	return ret;
}
