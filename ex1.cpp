#include<stdio.h>

int main()
{
	int array[4] = { 1, 2, 3,4 };
	int *ptr[4];

	for (int i = 0; i < 4; i++) {
		ptr[i] = &array[i];
	}

	for (int i = 0; i < 4; i++) {
		printf("%d ", *ptr[i]);
	}
	printf("\n");
	return 0;
}