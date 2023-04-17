#include<stdio.h>
int main()
{
    int arr[100],i,size,pos,insert;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter position of array: ");
    scanf("%d",&pos);
    printf("enter the insert elements: ");
    scanf("%d",&insert);
     for(i=size;i>=pos+1;i--)
     {
         arr[i]=arr[i-1];
     }
     arr[pos]=insert;
     printf("after insert elements: ");
     for(i=0;i<size+1;i++)
     {
         printf("%d ",arr[i]);
     }
     return 0;
}
