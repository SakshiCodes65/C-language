#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("64_write.txt", "w");
    FILE *fptr2;
    fptr2 = fopen("64_append.txt", "a");
    fprintf(fptr, "Thankyou!");
    fprintf(fptr2, "Thankyou!");
    return 0;
}