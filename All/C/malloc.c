#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i,*ptr,num,*min;
   scanf("%d",&num);
  ptr=(int*)malloc(num*sizeof(int));
  for(i=0; i<num; i++)
    scanf("%d",ptr+1);
  min=ptr;
  for(i=0; i<num; i++)
    printf("%d %d\n",ptr+i,*(ptr+i));
  free(ptr);;

   return 0;
}
