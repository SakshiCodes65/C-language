#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("first.txt" , "r");
    if(fptr==NULL){
        printf("File does not exist");
    }
    else{
        printf("File exists");
    }
    fclose(fptr);
    return 0;
}