/*#include<iostream>
using namespace std;
int main()
{
    char str[100];
    char ch;
    int i, j;

    cout<<"Enter String: "<<endl;
    gets(str);
    cout<<"Enter Integer: ";
    cin>>j;

    for(i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if(ch == 'a' ||ch=='e'||ch=='t')
        {
            ch = ch + j;



            str[i] = ch;
        }
        else if(ch == 'A' ||ch=='E'||ch=='T')
        {
            ch = ch +j;


            str[i] = ch;
        }

    }

    cout<<"Converted String : "<<str;

    return 0;
}*/

#include <iostream>
using namespace std;
void encode(string S, int j)
{
int i;
for(i=2;i<=S.length();i++)
{
S[i]=S[i]+j;
i+=2;
}
for(i=0;i<S.length();i++)
{
cout<<S[i];
}
}
int main()
{
int j=2;
string S="i am a student";
encode(S,j);
return 0;
}
