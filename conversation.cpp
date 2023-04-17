#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void btod(int num,int bes)
{
    int rem,i=0,j=0;
    while(num>0)
    {
        rem=num%10;
        i=i+(rem*pow(bes,j));
        num=num/10;
        j++;
    }
    cout<<"Decimal number is: "<<i<<endl;
}
void otod(int num,int bes)
{
    int rem,i=0,j=0;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        i=i+(rem*pow(bes,j));
        j++;
    }
    cout<<"Decimal number is: "<<i<<endl;
}
void hdtod()
{
    char n[20];

    int i,j,bes,rem,len;
    cout<<"Enter number and base: ";
    cin>>n>>bes;
    len=strlen(n);
    for(i=0;n[i]!='\0';i++)
    {
        len--;
        if(n[i]>='0'&&n[i]<='9')
        {
            rem=n[i]-48;
        }
        else if(n[i]>='a'&&n[i]<='f')
        {
            rem=n[i]-87;
        }
        else if(n[i]>='A'&&n[i]<='F')
        {
            rem=n[i]-55;
        }
        j=j+(rem*pow(bes,len));
    }
    cout<<"Decimal number is: "<<j;
}
int main()
{
    int number,base,choice;
    cout<<"\n                       Welcome to Number Conversion System     "<<endl;
    cout<<"                         +============================+           "<<endl;
    cout<<"\t\t      1. Binary      to    Decimal              "<<endl;
    cout<<"\t\t      2. Octal       to    Decimal              "<<endl;
    cout<<"\t\t      3. Hexadecimal to    Decimal              "<<endl;
    cout<<"enter choice: "<<endl;
    cin>>choice;
    if(choice==1)
    {
    cout<<"Enter number and base: "<<endl;
    cin>>number>>base;
    if(base==2)
    {
        btod(number,base);
    }
    }
    if(choice==2)
    {
    cout<<"Enter number and base: "<<endl;
    cin>>number>>base;
     if(base==8)
    {
         otod(number,base);
    }
   }
    if(choice==3)
    {
     hdtod();

    }
    }






