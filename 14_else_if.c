#include <stdio.h>

int main()
{
    int num;
    printf("enter the num: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("num you entered is zero");
    }
    else if (num > 0)
    {
        printf("num is greater than zero i.e. positive num");
    }
    else if (num < 0)
    {
        printf("num is less than zero i.e. negative num");
    }
    return 0;
}