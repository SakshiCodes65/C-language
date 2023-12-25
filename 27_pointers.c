// * --> value (pointer)
// & --> adress

#include <stdio.h>

int main()
{
    int a = 45;                        // declaring a variable
    int *b = &a;                       // declaring a pointer
    printf("value of a is %d\n", a);   // 45
    printf("adress of a is %u\n", &a); // adress of a
    // printf("%d\n" , *a); // error
    printf("value at adress of a  is %d\n", *(&a)); // value at adress of a --> 45
    printf("adress of a %u\n", b);                  // adress of a
    printf("adress of b %u\n", &b);                 // adress of b
    printf("value of a is %d\n", *b);               // 45
    printf("value at adress of b %u\n", *(&b));     // adress of a
    return 0;
}