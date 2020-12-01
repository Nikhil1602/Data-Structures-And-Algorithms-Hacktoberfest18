/* Implementation of Cycle Sort in an array */

#include<iostream>
#include<algorithm>
using namespace std;
void cycle_sort(int *arr, int n)
{
    int start, key, loc;
    for(start=0; start<n-1; start++)
    {
        key=arr[start];
        loc=start;
        for(int i=start+1; i<n; i++)
            if(arr[i] < key)
                loc++;
    if(loc==start)
        continue;
    while(key==arr[loc])
        loc++;
    if(loc != start)
        swap(arr[loc], key);
    while(loc != start)
    {
        loc=start;
        for(int i=start+1; i<n; i++)
            if(arr[i] < key)
                loc++;
        while(key == arr[loc])
            loc++;
        if(key != arr[loc])
            swap(key, arr[loc]);
    }
    }
}
int main()
{
    int arr[10];
    int i;
    cout<<"--------------------------------------\n";
    cout<<"Enter 10 elements in an array:\n";
    cout<<"--------------------------------------\n";
    for(i=0; i<10; i++)
    {
        cout<<"Enter Data in element - "<<i+1<<" : ";
        cin>>arr[i];
    }
    cycle_sort(arr, 10);
    cout<<"\n--------------------------------------\n";
    cout<<"After using Cycle Sort:\n";
    cout<<"--------------------------------------\n";
    for(i=0; i<10; i++)
        cout<<"Data in element - "<<i+1<<" : "<<arr[i]<<endl;
}
