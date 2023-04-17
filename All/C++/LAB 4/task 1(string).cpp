#include<iostream>
using namespace std;
class simple
{
    char *str;
    int c;
public:
    void setinput(char *s)
    {
        str=s;
    }
    void getword(char *s1)
    {
        c=1;
        for(int i=0;s1[i]!='\0';i++)
        {
            if(s1[i]==' ')
            {
                c++;
            }
        }
        cout<<"number of words: "<<c<<endl;
    }
    //void rev

};
int main()
{
    simple s;
    char *s2;
    s2=new char[100];
    cout<<"enter a text: ";
    cin.get(s2,100);
    s.setinput(s2);
    s.getword(s2);
    cout<<endl<<"reverse order(word-by-word): ";
    delete[]s2;
    return 0;
}
