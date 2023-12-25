#include <stdio.h>

int sum(int a, int b)
{
    int c = a + b;
    printf("%d\n", c); // 8
    a = 45;
    printf("%d\n", a); // 45
    c = a + b;         // 45 + 3
    printf("%d\n", c); // 48
}


    int
    main()
{
    int a = 5, b = 3;
    sum(a, b);
    printf("%d\n", a); // 5
    return 0;
}