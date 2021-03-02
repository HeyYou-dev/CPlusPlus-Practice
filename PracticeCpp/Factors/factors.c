#include <stdio.h>
int main()
{
    int input, count = 0;
    printf("Enter the value ");
    scanf("%d", &input);
    printf("Factors of %d  is\n", input);

    for (int i = 1; i <= input; i++)
    {
        if (input % i == 0)
        {
            printf("Factor is %d\n", i);
            count++;
        }
    }
    printf("Total Factors are %d  is\n", count);

    return 0;
}