#include<iostream>
using namespace std;
void max_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && a[j+1] > a[j])
            j = j + 1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j/2] = temp;
}
void build_maxheap(int *a,int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        max_heapify(a,i,n);
    }
}
int main()
{
    int size,i;
    cout<<"Enter size of array: ";
    cin>>size;
    int a[size];
    cout<<"\nEnter element of array: \n";
    for (i=1; i<=size; i++)
    {
        cin>>a[i];
    }
    build_maxheap(a,size);
    cout<<"\nMax Heap: \n\n";
    for (i=1; i <=size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}


