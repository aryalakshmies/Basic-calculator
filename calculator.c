#include <stdio.h>
int main()
{
    float a, b;
    int m, r, s;
    printf("Welcome");
    printf("\nSelect an operation\n");
    printf("1.Addition\t2.Substraction\t3.Multiplication\t4.Division\t5.Modulus");
    scanf("%d", &m);
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);
    if (m == 1)
        printf("%f + %f = %.2f", a, b, a + b);
    else if (m == 2)
        printf("%f - %f = %.2f", a, b, a - b);
    else if (m == 3)
        printf("%f * %f = %.2f", a, b, a * b);
    else if (m == 4 || m == 5)
    {
        if (b != 0)
        {
            if (m == 4)
                printf("%f / %f = %.2f", a, b, a / b);
            else
            {
                r = (int)a;
                s = (int)b;
                printf("%d % %d", r, s, r % s);
            }
        }
        else
            printf("The second number can't be zero");
    }
    else
        printf("Sorry, invalid input");
    return 0;
}