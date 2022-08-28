#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    i = 1;

    printf("enter the value of n  ");
    scanf("%d", &n);
    while (i <= 100)
    {
        printf("%d %d\n \n", n * i);
        i++;
    }

    return 0;
}