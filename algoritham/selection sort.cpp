#include<iostream>
using namespace std;
int main()
{
    int arr[20],i,j,temp,size,loc,min;
    cout<<"\n\t enter the size of the array :";
    cin>> size;
    cout<<"\n\tenter the element of the array :";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<(size-1);i++)
    {
        min=arr[i];
        loc=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                loc=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
    cout<<"\n\tarray after selection sort";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
