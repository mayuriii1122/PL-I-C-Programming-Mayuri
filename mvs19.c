/*
Program 19: Accept five elements of a one-dimensional array and
calculate their sum using a for loop.
*/
#include <stdio.h>

int main(void)
{
    int arr[5], i, sum = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
        sum += arr[i];

    printf("\nSum of all array elements = %d\n", sum);
    return 0;
}
