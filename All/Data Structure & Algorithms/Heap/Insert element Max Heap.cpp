#include <iostream>
using namespace std;
void heapify(int *arr, int n, int i)
{

    int parent = (i - 1) / 2;
    int temp;

    if (arr[parent] > 0)
    {

        if (arr[i] > arr[parent])
        {
            temp=arr[i];
            arr[i]=arr[parent];
            arr[parent]=temp;


            heapify(arr, n, parent);
        }
    }
}

void insertNode(int *arr, int n, int Key)
{

    n = n + 1;

    arr[n - 1] = Key;

    heapify(arr, n, n - 1);
}

void printArray(int *arr, int n)
{
    cout<<"\nAfter Insert a new element in max heap: \n\n";
    for (int i = 0; i <=n; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    int n,i,key;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter element of array: \n";
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter a new element in max heap: ";
    cin>>key;
    insertNode(arr, n, key);

    printArray(arr, n);

    return 0;
}
