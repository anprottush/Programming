#include<stdio.h>
int main()
{
    char str[100];
    int status;
    FILE *infile,*outfile;
    infile=fopen("text.txt","r");
    //outfile=fopen("result.txt","w");
    status=fscanf(infile,"%s",&str);
    while(status!=EOF)
    {
        printf("%s",str);
         status=fscanf(infile,"%s",&str);
    }

    fclose(infile);
    //fclose(outfile);
    return 0;
}
