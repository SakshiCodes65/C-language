#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("first.txt", "w");
    int number = 45;
    if (fptr == NULL)
    {
        printf("File doesnot exist");
    }
    else
    {
        printf("File is created successfully\n");
        fprintf(fptr, "Adding this number %d to the file using fprintf\n", number);
        fputs("Adding this line to the file using fputs\n ", fptr);
        fputc('A', fptr);
        printf("Your data is added to file.\n");
    }
    fclose(fptr);
    return 0;
}