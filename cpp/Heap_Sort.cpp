/* Implementation of Heap Sort in an array*/

#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l < n && arr[l] > arr[largest])
        largest=l;
    if(r < n && arr[r] > arr[largest])
        largest=r;
    if(largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heap_sort(int arr[], int n)
{
    for(int i=n/2-1; i>=0; i--)
        heapify(arr, n, i);
    for(int i=n-1; i>0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void printarr(int arr[], int n)
{
    for(int i=0; i<n; ++i)
        cout<<"Data in Element - "<<i+1<<" : "<<arr[i]<<endl;
}
int main()
{
    int arr[10], i;
    cout<<"------------------------------------\n";
    cout<<"Enter 10 elements in an array:\n";
    cout<<"------------------------------------\n";
    for(i=0; i<10; i++)
    {
        cout<<"Enter Data in element - "<<i+1<<" : ";
        cin>>arr[i];
    }
    heap_sort(arr, 10);
    cout<<"------------------------------------\n";
    cout<<"After using Heap Sort:\n";
    cout<<"------------------------------------\n";
    printarr(arr, 10);
}
