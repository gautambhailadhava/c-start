#include <stdio.h>
#include <conio.h>
void sum(int a, int b);

int main()
{
    sum(444, 50000000);
    return 0;
}

void sum(int a, int b)
{
    printf("sum of the two number is  %d", a + b);
}