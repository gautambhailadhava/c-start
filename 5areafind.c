#include <stdio.h>
int main()
{
    int radius;
    int area;
    area = 3 * radius * radius;
    printf("enter the value of circle radius=");
    scanf("%d", &radius);
    printf("the area of circle is= %f", area);
    return 0;
}