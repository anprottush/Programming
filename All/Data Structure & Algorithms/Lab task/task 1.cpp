/*1.
#include<iostream>
using namespace std;
int main()
{
   int i,size;
   cout<<"Enter size of the array: "<<endl;
   cin>>size;
   int arr[size];
   cout<<"Enter elements in array: "<<endl;
   for(i=0;i<size;i++)
   {
       cin>>arr[i];
   }
   cout<<"\nReverse array: "<<endl;
   for(i=size-1;i>=0;i--)
   {
     cout<<arr[i]<<" ";
   }
   cout<<"\n";

     return 0;
}
#include<iostream>
using namespace std;
int main()
{
   int arr[50],i,size,even=0,odd=0;
   cout<<"Enter size of the array: "<<endl;
   cin>>size;
   cout<<"Enter elements in array: "<<endl;
   for(i=0;i<size;i++)
   {
       cin>>arr[i];
   }
   for(i=0;i<size;i++)
   {
     if(arr[i]%2==0)
      {
         even++;
      }
     else
      {
         odd++;
      }
   }
     cout<<"total even elements: "<<even<<endl;
     cout<<"total odd elements: "<<odd<<endl;
     return 0;
}


#include <iostream>
using namespace std;
void valuerange(int a,int b)
{
cout<<"\nPrinting value "<<endl;

 for(int i=a;i<=b;i++)
 {
     if(i%2==1)
     {
         cout<<i<<" ";
     }

 }
 cout<<"\n";
}
int main()
{
    int a,b;
   cout<<"Starting value:  "<<endl;
 cin>>a;
 cout<<"\nEnding value:  "<<endl;
 cin>>b;
valuerange(a,b);
return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a[100][100],b[100][100],c[100][100],sum[100][100];
    int i,j,row,column;
    cout<<"enter size of row & column: "<<endl;
    cin>>row>>column;
    cout<<"\nEnter 1st Matrics: "<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cin>>a[i][j];
        }

    }
    cout<<"\nEnter 2nd Matrics: "<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cin>>b[i][j];
        }

    }
    cout<<"\nEnter 3rd Matrics: "<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cin>>c[i][j];
        }

    }

    cout<<"\nSum is: "<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            sum[i][j]=(a[i][j]+b[i][j]+c[i][j]);
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}*/
#include<iostream>
using namespace std;
void factorial()
{
    int i,n,fact=1;
    cout<<"enter number: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"\nFactorial is: "<<fact<<endl;
}
void prime()
{
    int n,i;
    cout<<"\nenter number: "<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"\nError! Not a prime number"<<endl;
            break;
        }
    }
    if(n==i)
    {
        cout<<"\nprime number"<<endl;
    }
}
int main()
{
    factorial();
    prime();
    return 0;
}

/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

   int z[10] ={12,32,43,1,54,53,15,64,3,13};


   for(int x=10-1; x>=0; x--)
   {
     cout<<  z[x]<<" ";
   }

   getch();

}


#include<iostream>
using namespace std;
int main()
{


int n,i,c=0;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==1)
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
}*/



