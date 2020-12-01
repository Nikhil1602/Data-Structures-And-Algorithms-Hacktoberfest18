/* Implementation of Jump-Search in an array */

#include<bits/stdc++.h>
using namespace std;
int jumpSearch(int arr[], int x, int n)
{
    int step=sqrt(n);
    int prev=0;
    while(arr[min(step, n)-1] < x)
    {
        prev=step;
        step+=sqrt(n);
        if(prev>=n)
            return -1;
    }
    while(arr[prev] < x)
    {
        prev++;
        if(prev==min(step, n))
            return -1;
    }
    if(arr[prev]==x)
        return prev;
    return -1;
}
int main()
{
    int arr[10];
    int x, index, i;
    cout<<"-----------------------------------------\n";
    cout<<"Enter 10 elements in sorted order:\n";
    cout<<"-----------------------------------------\n";
    for(i=0; i<10; i++)
    {
        cout<<"Enter Data in element - "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"-----------------------------------------\n";
    cout<<"Enter Number to be search: ";
    cin>>x;
    cout<<"-----------------------------------------\n";
    index=jumpSearch(arr, x, 10);
    if(index==-1)
        cout<<"Number doesn't exist!!\n";
    else
        cout<<"Number found on index - "<<index+1<<endl;
}
