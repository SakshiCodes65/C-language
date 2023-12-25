# include<stdio.h>
# include<string.h>

struct students{
    int rollno;
    int admno;
    char name[20];
}s1,s2;
struct students s3,s4;
int main()
{
    struct students s5,s6;
    s1.rollno = 45; // . is member operator
    s1.admno = 145;
    // s1.name = "sakshi";
    strcpy(s1.name , "sakshi");
    s6.rollno = 5; // . is member operator
    s6.admno = 15;
    // s6.name = "priya";
    strcpy(s6.name , "priya");
    printf("%d", s6.rollno);
    
    return 0;
}