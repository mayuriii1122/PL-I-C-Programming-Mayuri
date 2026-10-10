/*
Program 17: Display values and memory addresses of integer, float,
and character arrays.
*/
#include <stdio.h>

int main(void)
{
    int var1[5] = {10, 20, 30, 40, 50};
    float var2[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    char var3[5] = {'A', 'B', 'C', 'D', 'E'};
    int i;

    printf("Integer array:\n");
    for (i = 0; i < 5; i++)
        printf("The value of var1 at index %d is %d and address is %p\n",
               i, var1[i], (void *)&var1[i]);

    printf("\nFloat array:\n");
    for (i = 0; i < 5; i++)
        printf("The value of var2 at index %d is %.6f and address is %p\n",
               i, var2[i], (void *)&var2[i]);

    printf("\nCharacter array:\n");
    for (i = 0; i < 5; i++)
        printf("The value of var3 at index %d is %c and address is %p\n",
               i, var3[i], (void *)&var3[i]);

    return 0;
}
