#include <stdio.h>

int main()
{
    int num = 1;
    do
    {
        printf("%d", num); // 1 2 3 4 5 6 7 8 9 10
        printf("\n");
        num++;
    } while (num <= 10);

    return 0;
}