#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int mid;

    double marks;
}student;

int main()
{
   struct student;
   strcpy(student.name,"prottush");
   student.mid=1,2;
   student.marks=3.2;
   printf("student name: %s\n",student.name);
   printf("student mid: %d %d\n",student.mid,student.mid);
   printf("student marks: %2lf\n",student.marks);
}


