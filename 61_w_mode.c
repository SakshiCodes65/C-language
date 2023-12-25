#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("first.txt" , "w");
    if(fptr==NULL){
        printf("File doesnot exist");
    }
    else{
        printf("File is created successfully");
    }
    fclose(fptr);
    return 0;
}