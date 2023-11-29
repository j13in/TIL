#include <iostream>

int top = 0;
int *s;
int n = 5;

void push(int item)
{
	if (top >= n)
	{
		int i;
		n++;
		int* tmp = new int[n];

		for (i = 0; i < n - 1; i++)
			tmp[i] = s[i];

		delete[] s;
		s = tmp;
	}

	s[top++] = item;
}

	int pop()
	{
		return s[--top];
	}

void print()
{
	int i;
	for (i = 0; i < n; i++)
	{
		std::cout << s[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	s = new int[n];
	print();

	//test code

	push(3);
	print();

	push(1);
	print();

	push(5);
	print();

	pop();
	print();

	push(2);
	print();

	pop();
	print();

	push(7);
	print();

	push(9);
	print();

	push(4);
	print();

	push(6);
	print();

	push(3);
	print();

	push(2);
	print();

	push(1);
	print();

	delete[] s;
	return 0;
}