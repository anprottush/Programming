#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i;
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
    for(i=0;i<n;i++)
    {
        printf("%d %d",p+i,*(p+i));
    }
    free(p);
}
