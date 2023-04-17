//1.
/*#include<iostream>
using namespace std;
int main ()
{

    int arr[100][100],sum = 0,row,col;
    cout << "Enter Row and Col: " << endl;
    cin >> row >> col;
    cout<<"\nEnter elements of array: "<<endl;
    for(int i = 0; i < row; i++)
    {

        for(int j = 0; j < col; j++)
        {

            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {

        for(int j = 0; j < col; j++)
        {

            if(i == 0 || j == 0 || i == row-1 || j == col-1)
            {

                sum+=arr[i][j];
            }
        }
    }
    cout << "\nSum of boundary is: " << sum << endl;
    return 0;
}
//2.
#include<iostream>
using namespace std;
int main ()
{

    int arr[100][100],sum=0,row,col;
    cout << "Enter Row and Col: " << endl;
    cin >> row >> col;
    cout<<"\nEnter elements of array: "<<endl;
    for(int i = 0; i < row; i++)
    {

        for(int j = 0; j < col; j++)
        {

            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {

        for(int j = 0; j < col; j++)
        {

             if(i==j||i+j==(row-1))
            {
                sum = sum+arr[i][j];
            }
        }
    }
    cout << "\nSum of the diagonal and anti-diagonal elements is: " << sum << endl;
  return 0;
}
//3.
#include<iostream>
using namespace std;
string encode(string st,int n)
{
    for(int i=2; i<=st.length(); i=i+3)
    {
        st[i]=st[i]+n;

    }
    cout<<"\nConverted String: "<<endl;
    for(int i=0; i<st.length(); i++)
    {
        cout<<st[i];
    }
    cout<<endl;
    return st;
}
int main()
{
    string s;
    int j;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"\nEnter value "<<endl;
    cin>>j;
    encode(s,j);
    return 0;
}

//4.

#include<iostream>
using namespace std;
struct student
{
    long int id;
    int credit;
    float cgpa;
};
void studentinformation()
{
    int size,i;
    cout<<"Enter How Many Students Records: "<<endl;
    cin>>size;
    struct student s[size];
    for(i=0;i<size;i++)
    {
        cout<<"\n*****Student Information "<<i+1<<" *****"<<endl;
        cout<<"\nEnter Student ID: ";
        cin>>s[i].id;
        cout<<"\nEnter Student Credits Completed: ";
        cin>>s[i].credit;
        cout<<"\nEnter Student CGPA: ";
        cin>>s[i].cgpa;
    }
for(i=0;i<size;i++)
    {
        cout<<"\n*****Show Student Information "<<i+1<<" *****";
        cout<<"\nStudent Id: "<<s[i].id;
        cout<<"\nStudent Credits Completed: "<<s[i].credit;
        cout<<"\nStudent CGPA: "<<s[i].cgpa<<endl;

    }
    cout<<"\nPrint all the student's ID CGPA Based: "<<endl;
    for(i=0;i<size;i++)
    {
        if(s[i].cgpa>3.75)
        {
            cout<<s[i].id<<endl;
        }
    }
    cout<<"\nPrint all the student's ID Credits Based: "<<endl;
    for(i=0;i<size;i++)
    {
        if(s[i].credit>50)
        {
            cout<<s[i].id<<endl;
        }
    }
}
int main()
{
    studentinformation();

}


#include <iostream>
#include<cstring>
using namespace std;

string encode(string s,int j)
{

for(int i = j; i <s.length(); i=i+3)
{
if(s[i]==0)
{

 }
else
{
s[i] = s[i] + j;
}

 }
return s;
}
int main()
{
int j;
string s;
cout << "Please enter a string: ";
getline(cin,s);
cout<<endl<<"Enter an integer: ";
cin >> j;
cout<<endl<<"Converted String: "<<encode(s,j)<<endl;

return 0;
}


#include <iostream>

using namespace std;

string encode(string code) {

    for(int i = 0; i < code.length(); i++) {
        if(code[i] == ' ') {
            continue;
        }
        code[i]+=2;
    }
    return code;
}

int main()
{
    string code;

    cout << "Please enter a code : ";
    getline(cin, code);

    code = encode(code);
    cout << "Converted Code : " << code;

    return 0;
}

#include<iostream>
using namespace std;

string encode( string new_Str,int j)
{
char b;
for( int i=j; i < new_Str.size();i++ )
{
b = new_Str[i];
if(b!=32)
new_Str[i] = (char) (b+2);
}
return new_Str;
}
int main()
{
string old_str;
int num;
cout<<"Enter the sentence: ";
getline(cin, old_str);
cout<<"Cipher order: "<<endl;
cin>> num;
cout<<encode(old_str, num);
}


#include <iostream>

using namespace std;
void encode(string s,int j)
{
int i;
for(i=2;i<s.length();i++)
{
if(s[i]==' '){
}
else{
s[i]=s[i]+j;
i+=2;
}
}
for(i=0;i<s.length();i++)
{
if(s[i]==' '){
cout<<" ";
}
else{
cout<<s[i];
}
}
}
int main()
{
string s;

 cout<<"Enter the string value: ";
getline(std::cin, s);

 int j;
cout<<"Enter the Integer value: ";
cin>>j;

encode(s,j);
return 0;
}


#include <iostream>
#include<cstring>
using namespace std;
string encode(string s)
{
for(int i=0;i<s.length();i++)
{
if(s[i] == ' ')
{
continue;
}
else
{
s[i]+=2;
}
}
return s;
}
int main()
{
string ip;
getline(cin,ip);
cout<<encode(ip);

}*/
#include<iostream>
using namespace std;
int main(){

float F[5] = {10.2, 20.3, 30.4, 40.5, 50.6};
float *p;
p=&F[0];
cout<<(F+3);

}



