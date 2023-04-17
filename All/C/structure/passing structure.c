#include<stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;

};
union test
{
    int x,y;
    //double y;
};

 void personinfo()
 {
     struct person p;
     printf("Person Information:  \n");
    printf("Enter name: \n");
     scanf("%s",&p.name);
     printf("Enter Age: \n");
     scanf("%d",&p.age);
     printf("Enter Salary: \n");
     scanf("%f",&p.salary);
     printf("\n");

     displayinfo(p);

 }
 void displayinfo(struct person p1)
 {

      printf("\nName: %s",p1.name);
     printf("\nAge: %d",p1.age);
    printf("\nSalary: %f",p1.salary);

 }
int main()
{

   personinfo();
   union test t;
   t.x=12;
   t.y=24;

 printf("\nX= %d",t.x);
 printf("\nY= %d",t.y);


return 0;

}
