#include<stdio.h>
int main()
{
    int arr1[]={10,4,-2,0,22,-7,3,-5};
    int size = sizeof arr1 / sizeof arr1[0];
    for(int i=0;i<size;i++)
    {
        if(arr1[i]>=0)
        {
            printf("%d ",arr1[i]);
        }
    }

}
