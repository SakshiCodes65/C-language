#include <stdio.h>

int array(int *sakshi, int num)
{
    for (int i =0 ; i < num; i++)
    {
        printf("%d\n", *(sakshi + i));  
    }
}
int main()
{
    int arr[] = {334,546,3554,7673,336};
    array(&arr[0] , 5);
    return 0;
}