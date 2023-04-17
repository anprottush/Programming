#include<stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;

};
 struct person p[4];
 void personinfo()
 {
     for(int i=0;i<4;i++)
     {


     printf("Person Information: %d \n",i+1);
    printf("Enter name: \n");
     scanf("%s",&p[i].name);
     printf("Enter Age: \n");
     scanf("%d",&p[i].age);
     printf("Enter Salary: \n");
     scanf("%f",&p[i].salary);
     printf("\n");
     }
 }
 void displayinfo()
 {
     for(int i=0;i<4;i++){
      printf("\nName: %s",p[i].name);
     printf("\nAge: %d",p[i].age);
    printf("\nSalary: %f",p[i].salary);
     }
 }
int main()
{

   personinfo();
     displayinfo();



return 0;

}
