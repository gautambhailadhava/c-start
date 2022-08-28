#include <stdio.h>
#include <conio.h>
int main()
{
    int match, phisics, chemestry;
    int total;
    total = match + phisics + chemestry;
    printf("enter the mark of match  ");
    scanf("%d", &match);

    printf("enter the mark of phisics  ");
    scanf("%d", &phisics);
    printf("enter the mark of chemestry  ");
    scanf("%d", &chemestry);

    if ((match >= 33) || (phisics >= 33) || (chemestry >= 33) || (total >= 40))
    {
        printf("passS");
    }

    return 0;
}