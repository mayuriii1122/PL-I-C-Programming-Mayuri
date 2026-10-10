/*
Program 21: Accept five elements of a one-dimensional array and
calculate their sum using a do-while loop.
*/
#include <stdio.h>

int main(void)
{
    int arr[5], i = 0, sum = 0;

    do {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
        i++;
    } while (i < 5);

    i = 0;
    do {
        sum += arr[i];
        i++;
    } while (i < 5);

    printf("\nSum of all array elements = %d\n", sum);
    return 0;
}
