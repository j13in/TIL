#include <iostream>

int top = 0;
int s[100];

void push(int item)
{
	s[top++] = item;
}

int pop()
{
	return s[--top];
}

int main()
{
	// test code

	push(1);
	push(2);
	push(3);
	push(4);

	std::cout << pop() << std::endl;
	std::cout << pop();

	return 0;
}