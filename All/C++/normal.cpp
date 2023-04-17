#include<iostream>
using namespace std;
class student
{
private:
     int phone_no;
      double cgpa;
      string name;
      string id;
public:
    void set_name()
    {
        cout<<"this is a programm of a student information:"<<endl;
        cout<<"name: ";
        cout<<"ziad"<<endl;
    }
    void set_id()
    {
        cout<<"id: ";
        cout<<"18-36041-1"<<endl;
    }
    void set_phone_no()
{
    cout<<"phone no: ";
   cout<<"0162000000"<<endl;
}
void set_cgpa()
{
    cout<<"cgpa: ";
    cout<<"0.00";
}


};
int main()
{
    student s;
    s.set_name();
    s.set_id();
    s.set_phone_no();
    s.set_cgpa();
    return 0;
}
