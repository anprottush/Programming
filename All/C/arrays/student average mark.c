#include<stdio.h>
int main()
{
    int a[100],size,i,count=0,highest=0,b,lowest=0;
    float sum=0.0,average;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
        average=sum/size;
    }
    printf("sum is: %f\naverage is: %f\n ",sum,average);
    for(i=0;i<size;i++)
     {
            if(a[i]<average)
          {
             count++;
          }
     }
     printf("students get less than average marks is: %d",count);
    highest=a[0];
    lowest=a[0];
     for(i=0;i<size;i++)
     {
         if(a[i]>highest)
         {
             highest=a[i];
             b=i+1;
         }
         if(a[i]<lowest)
         {
             lowest=a[i];
         }
     }
     printf("\nhighest mark: %d\nlowest mark: %d\nstudent got highest marks: %d\n%d",highest,lowest,b);
     return 0;
}
