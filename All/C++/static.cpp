#include <iostream>
using namespace std;
class student
{
    static int count=0;
    public:
    student()
    {
        count++;
    }
    void display()
    {
        cout<<count;
    }

};
int main()
{
    student s1,s2,s3;
    s1.display();
    s2.display();
    s3.display();

}
