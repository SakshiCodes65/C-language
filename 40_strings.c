# include<stdio.h>

int main()
{
    char s[] = "sakshi";  // modern way
    // s = "goel";  // cant change due to array 
    printf("%s\n", s);
    char *a = "sakshi";  // modern way
    a = "goel";
    printf("%s\n", a);
    char str[] = {'s','a','k','s','h','i','\0'};
    printf("%s\n", str);



    return 0;
}