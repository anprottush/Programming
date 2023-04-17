#include<stdio.h>
#include<string.h>
struct spell
{
    char t[10];
    int s[10];
};
int main()
{
    struct spell dictionary[100],check[100];
    int i,j,a=0,b=0,size;
    printf("enter size: ");
    scanf("%d",&size);
    printf("enter the dictionary:\n");
    for(i=0;i<size;i++)
    {
        gets(dictionary[i].t);
        if(dictionary[i].t[0]=='#')
        {
            a=i;
            break;
        }
        dictionary[i].s[i]=strlen(dictionary[i].t);
     }
     printf("enter the words to check:\n");
     for(i=0;i<size;i++)
      {
         gets(check[i].t);
         if(check[i].t[0]=='#')
           {
               b=i;
               break;
           }
          check[i].s[i]=strlen(check[i].t);
      }
    printf("corrected words:\n");
    for(j=0;j<b;j++)
    {
        printf("%s:",check[j].t);
        for(i=0;i<a;i++)
        {
            if(check[j].s[j]==dictionary[i].s[i])
               {
                  if(check[j].t[1]==dictionary[i].t[1]&&check[j].t[0]!=dictionary[i].t[0])
                     {
                        printf("%s,",dictionary[i].t);
                     }
                  else if(check[j].t[0]==dictionary[i].t[0] && check[j].t[dictionary[i].s[i]-1]!=dictionary[i].t[dictionary[i].s[i]-1])
                     {
                        printf("%s,",dictionary[i].t);
                     }
                  else if(check[j].t[0]==dictionary[i].t[1] && check[j].t[1]==dictionary[i].t[0])
                      {
                         printf("%s,",dictionary[i].t);
                      }
                  else if(check[j].t[1]==dictionary[i].t[1] && (check[j].t[0]!=dictionary[i].t[0] || check[j].t[dictionary[i].s[i]-1]!=dictionary[i].t[dictionary[i].s[i]-1]))
                      {
                        printf("%s,",dictionary[i].t);
                      }
               }
               if(check[j].s[j]==dictionary[i].s[i] && check[j].t[0]==dictionary[i].t[0] && check[j].t[dictionary[i].s[i]-1]==dictionary[i].t[dictionary[i].s[i]-1])
                     {
                        printf("correct ");
                     }
        }
        printf("\b \n");
    }
    return 0;
}
