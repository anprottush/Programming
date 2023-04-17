#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i,*max,*min;
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("out of memory");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    max=p;
    min=p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>*max||*(p+i)>*min)
        {
            *max=*(p+i);
            *(p+i)=*min;
        }
    }
    printf("maximum is: %d\nminimum is: %d",*max,*min);
    free(p);
}
