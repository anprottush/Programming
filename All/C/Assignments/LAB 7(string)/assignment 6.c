#include<stdio.h>
int main()
{
  	char str[100],c,ch;
  	int i;
    printf("enter string: ");
  	gets(str);
    printf("enter the character to replace: ");
    scanf("%c",&c);
    getchar();
    printf("enter character to replace '%c' with: ",c);
  	scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
  	{
  		if(str[i]==c)
		  {
  			 str[i]=ch;
 		  }
	}
    printf("\n%s",str);
    return 0;
}
