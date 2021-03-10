
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

 int main() {
	int num;
	int *ptr;
	int **handle;

	num = 14;
	ptr = (int *)malloc(2 * sizeof(int));
	*ptr = num;
	handle = (int **)malloc(1 * sizeof(int *));
	*handle = ptr;

	// Insert extra code here
	printf("num address is: %p, and its value is: %d \n", &num, num);
	printf("ptr address is: %p, and its value is: %p, value of *ptr: %d\n", &ptr, ptr, *ptr);
	printf("handle address is: %p, and its value is: %p, value of *handle: %p\n", &handle, handle, *handle);

	


	return 0;
} 

