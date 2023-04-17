#include <stdio.h>
#include <string.h>
#define size 100
int main()
{
    char correct[size][size],check[size][size];

    int i,j,k,count1=0,count2=0,flag=0,flag1=0,len1,len2;

    printf("Enter the dictionary:\n");
    for(i=0;i<size;i++)
    {
        scanf("%s",correct[i]);
        if(correct[i][0]=='#')
        {
            break;
        }
        count1++;
    }

    printf("Enter the words to check:\n");
    for(i=0;i<size;i++)
    {
        scanf("%s",check[i]);
        if(check[i][0]=='#')
        {
            break;
        }
        count2++;
    }

    printf("Corrected words:\n");

    for(i=0;i<count2;i++)
    {
        printf("%s:, ",check[i]);
        for(j=0;j<count1;j++)
        {
            len1 = strlen(check[i]);
            len2 = strlen(correct[j]);
            if( len1 == len2 )
            {
                //first condition
                if(check[i][0]!=correct[j][0])
                {
                    for(k=1;check[i][k]!='\0';k++)
                    {
                        if(check[i][k]==correct[j][k])
                        {
                            flag=1;
                        }
                        else
                        {
                            flag=0;
                            break;
                        }

                    }

                    if(flag==1)
                    {
                        printf("%s, ",correct[j]);
                    }
                }

                //second condition
                if(check[i][len1-1]!=correct[j][len2-1])
                {
                    for(k=0;k<=len1-2;k++)
                    {
                        if(check[i][k]==correct[j][k])
                        {
                            flag1 = 1;
                        }
                        else
                        {
                            flag1 = 0;
                            break;
                        }
                    }

                    if(flag1==1)
                    {
                        printf("%s, ",correct[j]);
                    }
                }

                //third condition

                if(strcmp(check[i],correct[j])==0)
                {
                    printf("correct");
                }
            }
        }

        printf("\n");
    }


    return 0;
}
