#include <stdio.h>
int main()
{
  int arr[100],i,size,num,flag;
  printf("Enter size of array: ");
  scanf("%d",&size);
  printf("Enter elements in array: ");
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
    printf("\nEnter the element to search: ");
    scanf("%d",&num);
    flag=0;
    for(i=0;i<size;i++)
  {
    if(arr[i]==num)
     {
        flag=1;
        printf("\nthe element exists");
        break;
     }
  }
    if(flag==0)
  {
    printf("\nthe element not exists");
  }
    return 0;
}
