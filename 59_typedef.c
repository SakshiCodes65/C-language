# include<stdio.h>
# include<string.h>
typedef struct students
{
    int rollno;
    int admno;
    char name[20];
}scut;
void printDetails(scut stu){
    printf("name of student is %s\n", stu.name);
    printf("rollno of student is %d\n", stu.rollno);
    printf("admno of student is %d\n", stu.admno);
    stu.rollno = 34;
}
int main()
{
    scut s1;
    s1.admno = 45;
    s1.rollno = 5;
    strcpy(s1.name , "sakshi");
    printDetails(s1);
    printf("rollno of student is %d\n", s1.rollno);
    typedef int i;
    i sakshi = 56;
    i tarun = 78;
    int himani = 3;
    return 0;
}