

#include<iostream>
using namespace std;

void swapValues(int &a, int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
void bubbleSort(int a[],int p)
{
    int pass,i,c;
    for(pass=1;pass<p;pass++)
    {
        c=0;
        for(i=0;i<p-1;i++)
        {
            if(a[i]>a[i+1])
            {
                swapValues(a[i],a[i+1]);
                c=1;
            }
        }
        if(c==0)
            break;
    }
    cout<<"No. of Pass: "<<pass<<endl;
    for(i=0;i<p;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n,i;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
}
