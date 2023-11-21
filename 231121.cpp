#include <iostream>
int n = 2;

void print(int* arr)
{
	int i;
	for (i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
int* append(int* arr, int item)
{
	int i;
	n++;
	int* tmp = new int[n];
	for (i = 0; i < n-1; i++)
		tmp[i] = arr[i];
	tmp[n - 1] = item;

	delete[] arr;

	return tmp;
	//arr = tmp
}

int main()
{
	int *arr = new int[n];
	arr[0] = 5;
	arr[1] = 3;

	while (1) {
		arr = append(arr, 1);
		print(arr);
	}

	delete[] arr;

	return 0;
}
