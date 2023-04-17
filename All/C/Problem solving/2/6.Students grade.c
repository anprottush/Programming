#include<stdio.h>
int main()
{
    char name[100];
    int marks,i;
    FILE *infile,*outfile;
    infile=fopen("data.txt","r");
    outfile=fopen("result.txt","w");
    if(infile==NULL)
        {
		    printf("file not found");
        }
	fprintf(outfile,"Name\tMarks\tGrade");
	fprintf(outfile,"\n-----------------------\n");
     for(i=0;i<5;i++)
         {
             fscanf(infile,"%s %d",name,&marks);
             if(marks>=60)
                {
                   fprintf(outfile,"%s\t%d\tpass\n",name,marks);
                }
             else
                {
                   fprintf(outfile,"%s\t%d\tfail\n",name,marks);
                }
         }
    fclose(infile);
    //fclose(outfile);
}


