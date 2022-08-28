#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("enter the value of a ");
    scanf("%d", &a);
    printf("enter the value of b  ");
    scanf("%d", &b);
    printf("enter the value of c ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is bigist number ");
        }

        else
        {
            printf(" c is bigist number");
        }
    }
    else
    {
        printf("b is greter number");
    }

    return 0;
}