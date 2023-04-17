#include<stdio.h>
int main()
{
	int a[100];
	int i,j,k,flage,size;
	printf("Enter size of array: ");
	scanf("%d",&size);
    printf("Enter %d elements: ",size);
	for(i=0;i<size;i++)
	{
    	scanf("%d",&a[i]);
   	}
    for(i=0;i<size;i++)
	{
		flage=1;
		for(j=i+1;j<size;j++)
		{
    		if(a[i]==a[j])
    		{
    			for(k=j;k<size;k++)
    			{
    				a[k]=a[k+1];
				}
				size--;
				j--;
				flage=0;
				break;
			}
		}
		if(flage!=1)
		{
			for(j=i;j<size-1;j++)
			{
				a[j]=a[j+1];
			}
			size--;
			i--;
		}
	}
    printf("unique elemnts are: ");
 	for(i=0;i<size;i++)
  	{
 		printf("%d ",a[i]);
  	}
 	return 0;
}
