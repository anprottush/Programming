#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    ofstream out("number.txt");
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        out<<endl;
        cin>>s;
        out<<s;
    }
    out.close();

    in.open("number.txt");
    while(!in.eof())
    {
        in>>s;
        for(int i=2;i<3;i++)
        {
            if(s.at(i)=='7')
            {
                cout<<s<<" "<<"GP"<<endl;
            }
            else
            {
                cout<<"not gp"<<endl;
            }
        }
    }
    in.close();
    return 0;
}
