#include<iostream>
using namespace std;
int main()
{
    int arr[20],size,i,j,temp;
        cout<<"\n\t enter the size of the array :";
    cin>> size;
    cout<<"\n\tenter the element of the array :";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<size;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
        cout<<"\n\tarray after selection sort";
    for(i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }

}
