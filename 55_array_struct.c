#include <stdio.h>
#include <string.h>

struct students
{
    int rollno;
    int admno;
    char name[20];
};
int main()
{
    struct students s[100];
    s[0].rollno = 45;
    s[0].admno = 544;
    strcpy(s[0].name , "sakshi");
    s[50].rollno = 84;
    s[50].admno = 12;
    strcpy(s[50].name , "goel");
    return 0;
}