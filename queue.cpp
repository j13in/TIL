#include <iostream>

int Q[5];
int f = 0;
int b = 0;

void push(int item)
{
	if (f == b-1)
	{
		std::cout << "Queue Overflow Error" << std::endl;
	}

	if (f >= 5)
		f = 0;
	Q[f++] = item;
}

int pop()
{
	if (f == b)
	{
		std::cout << "Queue Underflow Error" << std::endl;
		return -1;
	}

	if (b > 5)
		b = 0;

	return Q[b++];
}


void print()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		std::cout << Q[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	// test code

	push(1);
	print();

	push(2);
	print();

	push(3);
	print();

	push(4);
	print();

	push(5);
	print();

	push(6);
	print();

	return 0;
}