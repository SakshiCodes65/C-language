# include<stdio.h>
# include<string.h>
struct students
{
    int rollno;
    int admno;
    char name[20];
};
int main()
{
    struct students sakshi;
    struct students *ptr;
    ptr = &sakshi;
    (*ptr).rollno = 45;
    ptr -> admno = 145;
    printf("%d", sakshi.rollno);
    return 0;
}