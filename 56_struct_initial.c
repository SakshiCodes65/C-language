# include<stdio.h>
#include <string.h>
struct students
{
    int rollno;
    int admno;
    char name[20];
};
int main()
{
    struct students sakshi = {25,456,"sakshi"}; 
    return 0;
}