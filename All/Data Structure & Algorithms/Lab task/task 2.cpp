/*1.
#include<iostream>
using namespace std;
int main()
{
   int i,j,size1,size2;
   cout<<"Enter size of the array1: "<<endl;
   cin>>size1;
   int arr1[100],arr2[100],a[100],b[100];
   cout<<"\nEnter elements in array 1: "<<endl;
   for(i=0;i<size1;i++)
   {
       cin>>arr1[i];

   }
   i=0;
   for(j=size1-1;j>=0;j--)
   {
     a[i]=arr1[j];
     i++;
   }
   cout<<"\nEnter size of the array2: "<<endl;
   cin>>size2;
   cout<<"\nEnter elements in array 2: "<<endl;
   for(i=0;i<size2;i++)
   {
       cin>>arr2[i];

   }
   i=0;
   for(j=size2-1;j>=0;j--)
   {
     b[i]=arr2[j];
     i++;

   }
   cout<<"\nAfter Merging the array: "<<endl;
 for(i=0;i<size2;i++)
   {
       cout<<b[i]<<" ";

   }
   for(i=0;i<size1;i++)
   {
       cout<<a[i]<<" ";

   }
cout<<"\n";
     return 0;

}

//2.
#include<iostream>
using namespace std;
int main()
{
    int a[100], b[100], c[100], i, j, k=0, x, count;
     int size1,size2;
    cout<<"Enter size of the array1: "<<endl;
    cin>>size1;
    cout<<"\nEnter elements in array 1: "<<endl;
    for(i=0; i<size1; i++)
    {
        cin>>a[i];

    }
    cout<<"\nEnter size of the array2: "<<endl;
    cin>>size2;
    cout<<"\nEnter elements in array 2: "<<endl;
    for(j=0; j<size2; j++)
    {
        cin>>b[j];

    }
    for(i=0; i<size1; i++)
    {
        for(j=0; j<size2; j++)
            if(a[i]==b[j])
            {
                count = 0;
                for(x=0; x<k; x++)
                {
                    if(a[i]==c[x])
                        count++;
                }
                if(count==0)
                {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    if(count==1)
    {
    cout<<"\nCommon Element Are: "<<endl;
    for(i=0; i<k; i++)
    {
        cout<<c[i]<<" ";
        cout<<"\n";
    }
    }
    else
    {
       cout<<"\nNo common element!";
       cout<<"\n";
    }
    return 0;
}

//3.

#include<iostream>
using namespace std;
int main()
{
    int a[100], i, j, k,flag=0;

    int size1;
    cout<<"Enter size of the array: "<<endl;
    cin>>size1;
    cout<<"\nEnter elements in array : "<<endl;
    for(i=0; i<size1; i++)
    {
        cin>>a[i];

    }

    cout<<"\nArray is: "<<endl;
    for(i = 0; i < size1; i++)
    {
        cout<<a[i]<<" ";
    }


    for(i = 0; i < size1; i++)
    {
        for(j = i+1; j < size1; )
        {
            if(a[j] == a[i])
            {
                for(k = j; k < size1; k++)
                {
                    a[k] = a[k+1];
                    flag=1;
                }
                size1--;
            }
            else
            {
                j++;
            }
        }
    }
    if(flag==1)
    {
        cout<<"\nremove duplicate element in array: "<<endl;
        for(i = 0; i < size1; i++)
        {
            cout<<a[i]<<" ";
            cout<<"\n";

        }
    }
    else
    {
        cout<<endl<<"\nArray already unique!";
        cout<<"\n";
    }

}

//4.

#include<iostream>
using namespace std;
int main()
{
    int a[100], i, j, n,count=0;

    int size1;
    cout<<"Enter size of the array: "<<endl;
    cin>>size1;
    cout<<"\nEnter elements in array : "<<endl;
    for(i=0; i<size1; i++)
    {
        cin>>a[i];

    }

    cout<<"\nArray is: "<<endl;
    for(i = 0; i < size1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n\nInput a number to search:"<<endl;
    cin>>n;
    for(i=0;i<size1;i++)
    {
        if(n==a[i])
        {
            count++;
        }
    }
    cout<<"\nThe number occurs "<<count<<" times in the array"<<endl;
}*/

//5.

#include <iostream>
using namespace std;
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;


    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];


        freq[i] = 1;

    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {

            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    cout<<"\nFrequency of all elements of array : \n";
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            cout<<arr[i]<<" occurs = "<<freq[i]<<" times\n"<<endl;
        }
    }

    return 0;
}













