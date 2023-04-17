#include <iostream>
using namespace std;
void heapify(int *arr, int n, int i)
{
    int temp;
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;


    if (l < n && arr[l] > arr[largest])
        largest = l;


    if (r < n && arr[r] > arr[largest])
        largest = r;


    if (largest != i) {
         temp = arr[i];
      arr[i] = arr[largest];
      arr[largest] = temp;


        heapify(arr, n, largest);
    }
}

void deleteRoot(int *arr, int& n)
{

    int lastElement = arr[n - 1];

arr[0] = lastElement;

n = n - 1;

heapify(arr, n, 0);
}

void printArray(int *arr, int n)
{
    cout<<"\nAfter Delete root in max heap: \n\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}


int main()
{
   int n,i;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter element of array: \n";
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    deleteRoot(arr, n);

    printArray(arr, n);

    return 0;
}
