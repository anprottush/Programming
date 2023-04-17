#include<stdio.h>
int main()
{
    int a[100];
    int i,size,position,value;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position & value: ");
    scanf("%d%d",&position,&value);
    for(i=size;i>position;i--)
     {
         a[i]=a[i-1];
     }
     a[position]=value;
     printf("after insert elements: ");
     for(i=0;i<size+1;i++)
     {
         printf("%d ",a[i]);
     }
     return 0;
}
