#include<iostream>
using namespace std;
class student{
   private:
    string phone_no;
      double cgpa;
   public:
      string name;
      string id;
   void set_phone(string p_n)
      {phone_no=p_n;}
   void set_cgpa(double cg)
      {cgpa=cg;}
   double get_cgpa()
      {return cgpa;}
   string get_phone()
       {return phone_no;}
};

int main()
{   string phone;
    double cgpa;
    student s;
    s.name="ziad";
    s.id="18-36041-1";
    phone="01600000";
    cgpa=3.45;
    s.set_phone(phone);
    s.set_cgpa(cgpa);
    cout<<"this is a programm of a student information:"<<endl;
    cout<<"name:"<<s.name<<endl<<"id:"<<s.id<<endl<<"phone no:"<<s.get_phone()<<endl<<"cgpa:"<<s.get_cgpa();
}
