# include<stdio.h>
# include<string.h>

int main()
{
    char s[] = "sakshi";  // modern way
    printf("%d", sizeof(s));  // includes null char
    return 0;
}