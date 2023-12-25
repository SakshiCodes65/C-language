#include <stdio.h>

int main()
{
    int number = 23;
    int *container = &number;
    printf("%u\n", container);
    container++; // container = container + 1
    printf("%u\n", container);

    char alpha = 'a';
    char *cont = &alpha;
    printf("%u\n", cont);
    cont++; // cont = cont + 1
    printf("%u\n", cont);

    return 0;
}