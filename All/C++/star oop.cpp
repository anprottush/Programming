#include<iostream>
using namespace std;
class star
{
int i,j,k;
public:
void get_input()
{
for(i=1; i<=5; i++)
{
for(j=4; j>=i; j--)
{
cout<<" ";
}
for(k=1; k<=(2*i-1); k++)
{
cout<<"*";
}
cout<<endl;
}
for(i=4;i>=1;i--)
{
for(j=4;j>=i;j--)
{
cout<<" ";
}
for(k=1;k<(i*2);k++)
{
cout<<"*";
}
cout<<endl;
}
}
};
int main()
{
    star s;
    s.get_input();
    return 0;
}
