#include <stdio.h>

int array(int *sakshi, int num)
{
    sakshi[1]=45;
}
int main()
{
    int arr[] = {334,546,3554,7673,336};
    array(&arr[0] , 5);
    printf("%d\n", arr[1]);  // 546 or 45??
    return 0;
}