#include<stdio.h>
struct student
    {
        char name[100];
        int mid1;
        int mid2;
    };
int main()
    {
        int n,i,sum=0,highest=0,temp;
         printf("Enter Size: ");
        scanf("%d",&n);
        struct student st[100];
        for(i=0;i<n;i++)
        {
            printf("Enter Student Name: ");
             scanf("%s",st[i].name);
             printf("Enter Student Mid 1 mark: ");
             scanf("%d",&st[i].mid1);
              printf("Enter Student Mid 2 mark: ");
             scanf("%d",&st[i].mid2);
        }
        for(i=0;i<n;i++)
        {
            printf("\nStudent Name: %s\nStudent Mid 1 mark: %d\nStudent Mid 2 mark: %d",st[i].name,st[i].mid1,st[i].mid2);
             sum=st[i].mid1+st[i].mid2;
             if(highest<sum)
             {
                 highest=sum;
             }
             temp=i;
        }
        printf("\nsum is: %d %d",i+1,sum);
        printf("\nsum is: %s %d",st[temp].name,highest);

}

