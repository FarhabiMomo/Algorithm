#include<iostream>
using namespace std;
int main()
{
    int a[20],size,i,j,temp,swap;
    cout<<"\n\tenter the size of the array : ";
    cin>>size;
    cout<<"\n\tenter the array  of the element : ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<(size-1);i++)
    {
        swap=0;

    for(j=0;j<(size-i)-1;j++)
    {
        if(a[j]>a[j+1])
           {
               temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap=1;
           }

    }
    if(swap==0)
    {
        break;
    }
    }
}
