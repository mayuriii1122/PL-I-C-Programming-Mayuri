/*
Program 18: Accept integer, float, and character arrays from the user
and display each element's value and memory address.
*/
#include <stdio.h>

int main(void)
{
    int var1[5], i;
    float var2[5];
    char var3[5];

    for (i = 0; i < 5; i++) {
        printf("Enter integer value: ");
        scanf("%d", &var1[i]);
    }
    for (i = 0; i < 5; i++)
        printf("The value of var1 at index %d is %d and address is %p\n",
               i, var1[i], (void *)&var1[i]);

    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("Enter float/decimal value: ");
        scanf("%f", &var2[i]);
    }
    for (i = 0; i < 5; i++)
        printf("The value of var2 at index %d is %f and address is %p\n",
               i, var2[i], (void *)&var2[i]);

    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("Enter character value: ");
        scanf(" %c", &var3[i]);
    }
    for (i = 0; i < 5; i++)
        printf("The value of var3 at index %d is %c and address is %p\n",
               i, var3[i], (void *)&var3[i]);

    return 0;
}
