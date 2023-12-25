#include <stdio.h>

int main()
{
    int num;
    printf("enter the num between 11 to 17: ");
    scanf("%d", &num);
    switch (num)
    {
    case 11:
    {
        printf("monday\n");
        break;
    }
    case 12:
    {
        printf("tuesday\n");
        break;
    }
    case 13:
    {
        printf("wednesday\n");
        break;
    }
    case 14:
    {
        printf("thursday\n");
        break;
    }
    case 15:
    {
        printf("friday\n");
        break;
    }
    case 16:
    {
        printf("satday\n");
        break;
    }
    case 17:
    {
        printf("sunday\n");
        break;
    }
    default:
    {
        printf("choose a valid num");
    }
    }
    return 0;
}