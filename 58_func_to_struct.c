# include<stdio.h>
# include<string.h>
struct students
{
    int rollno;
    int admno;
    char name[20];
};
void printDetails(struct students stu){
    printf("name of student is %s\n", stu.name);
    printf("rollno of student is %d\n", stu.rollno);
    printf("admno of student is %d\n", stu.admno);
    stu.rollno = 34;
}
int main()
{
    struct students s1;
    s1.admno = 45;
    s1.rollno = 5;
    strcpy(s1.name , "sakshi");
    printDetails(s1);
    printf("rollno of student is %d\n", s1.rollno);
    
    return 0;
}