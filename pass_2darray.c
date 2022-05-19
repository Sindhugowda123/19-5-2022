//Passing 2d array

#include<stdio.h>

void print_array(int (*ptr)[3], int row, int col)
//void print_array(int arr[][4], int row, int col)
//void print_array(int row, int col, int (*ptr)[col])
{
	printf("Array elements are : ");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ", *(*(ptr+i)+j));
		}
	}
	printf("\n");
}

int main()
{
	int arr[2][3] = {39, 20, 10, 30, 80, 79};
	print_array(arr,2,3);
}
