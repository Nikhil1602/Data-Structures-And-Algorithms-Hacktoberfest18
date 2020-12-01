/* Implementation of Interpolation Search */

#include<bits/stdc++.h>
using namespace std;
int interpolation_search(int arr[], int n, int x)
{
    int lower=0;
    int higher=n-1;
    while(lower<=higher && x>=arr[lower] && x<=arr[higher])
    {
        if(lower == higher)
        {
            if(arr[lower] == x)
                return lower;
            return -1;
        }
        double a=higher-lower;
        int b=arr[higher]-arr[lower];
        int c=x-arr[lower];

        int pos=lower + a/b * c;

        if(arr[pos]==x)
            return pos;
        if(arr[pos]<x)
            lower=pos+1;
        else
            higher=pos-1;
    }
    return -1;
}
int main()
{
    int arr[10];
    int i, x, index;
    cout<<"--------------------------------------\n";
    cout<<"Enter 10 elements in sorted order:\n";
    cout<<"--------------------------------------\n";
    for(i=0; i<10; i++)
    {
        cout<<"Enter Data in element - "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"--------------------------------------\n";
    cout<<"Enter Data to be searched: ";
    cin>>x;
    cout<<"--------------------------------------\n";
    index=interpolation_search(arr, 10, x);
    if(index==-1)
        cout<<"Data doesn't exist!!\n";
    else
        cout<<"Data found on index - "<<index+1<<endl;
}
