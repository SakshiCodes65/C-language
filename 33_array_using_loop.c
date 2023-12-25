# include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n ");
    scanf("%d", &n);
    int count[n];

    for(int i = 0; i<n; i++){
        printf("enter the value at index %d ", i);
        scanf("%d" , &count[i]);
    }
    for(int i = 0; i<n; i++){
        printf("the value at index %d is %d\n", i, count[i]);
    }
    return 0;
}