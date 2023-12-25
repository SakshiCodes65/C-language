#include <stdio.h>

void printHelloWorld(); // fucntion declaration
void intro();

int main()
{
    printf("before func\n");
    printHelloWorld(); // function call
    printf("after func\n");
    return 0;
}

void printHelloWorld() // function define
{
    printf("Hello world !\n");
    intro();
    printf("this is after intro\n");
}
void intro()
{
    printf("My name is sakshi\n");
}