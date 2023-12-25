#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("63_input.txt" , "r");
    char alpha ;
    char line[50];

    if(fptr==NULL){
        printf("File does not exist");
    }
    else{
        printf("File exists\n");
        alpha = fgetc(fptr);
        printf("%c", alpha);
        fgets(line, sizeof(line), fptr);
        printf("%s", line);
    }
    fclose(fptr);
    return 0;
}