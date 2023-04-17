#include<stdio.h>
int main()
{
  int arr[]={10,20,30,40,50};
  int num,i;
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("enter element to search: ");
  scanf("%d",&num);
  for(i=0;i<n;i++)
    {
        if(arr[i]==num){
            printf("element is an exists %d",arr[i]);
        }
        else
        {
      printf("element is not an exists");
        }
      return 0;
      }
}
