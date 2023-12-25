# include<stdio.h>

int main()
{
    printf("%s\n", __FILE__);  // KONSI FILE ME HAI
    printf("%s\n", __DATE__); // KYA DATE HAI
    printf("%s\n", __TIME__);  // KYA TIME HAI
    printf("%d\n", __LINE__);  // KONSI LINE HAI
    printf("%d\n", __STDC__);  // COMPILATON SUCCESSFUL
    return 0;
}