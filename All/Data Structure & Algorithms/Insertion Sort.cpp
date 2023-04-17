#include <iostream>
using namespace std;
void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        cout<<"Pass: "<<i<<" "<<"Key Value: "<<key<<"\n";
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        for(j=0;j<n;j++)
    {
        cout<<arr[j]<<"\t";
    }
    cout<<endl;
    }

}
void printArray(int arr[], int n)
{
    int i;
    cout<<"\nFinal Result: \n";
    for (i=0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,i;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}
