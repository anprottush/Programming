#include<stdio.h>
#include<string.h>
 int main()
{
  	char str[100][100];
  	int i,j,len;
  	len=strlen(str);
  	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
        {
            scanf("%s",&str[i][j]);
        }
	}

    return 0;
}
