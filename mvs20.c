/*
Program 20: Accept five elements of a one-dimensional array and
calculate their sum using a while loop.
*/
#include <stdio.h>

int main(void)
{
    int arr[5], i = 0, sum = 0;

    while (i < 5) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;
    while (i < 5) {
        sum += arr[i];
        i++;
    }

    printf("\nSum of all array elements = %d\n", sum);
    return 0;
}
