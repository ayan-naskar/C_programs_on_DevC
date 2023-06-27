#include<stdio.h>
int main()
{
    int arr[5], i=0;
    arr[0]=12121212;
    while(i<5)
    {
         printf("i= %d, arr[i]= %d\n", i,arr[i]);
       arr[i] = ++i;

    }
    for(i=0; i<5; i++)
        printf("%d, ", arr[i]);
    return 0;
}
