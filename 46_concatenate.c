#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "sakshi ";
    char str2[] = "goel ";
    // i want to be sakshi goel
     strcat(str1,str2);
    printf("%s", str1);
    return 0;
}