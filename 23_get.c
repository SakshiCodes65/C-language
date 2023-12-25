#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int position;
    scanf("%d", &position);
    int bitmask = 1 << position;
    int ans = bitmask & number;
    if (ans == 0)
    {
        printf("bit = 0");
    }
    else
    {
        printf("bit = 1");
    }
    return 0;
}