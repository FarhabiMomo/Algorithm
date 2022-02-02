#include<iostream>
using namespace std;
int partition(int *A,int p,int r)
{
    int x,i,j;
    x=A[r];
    i=p-1;

    for(j=p;j<r;j++)
    {
        if(A[j]<=x)
        {
            i++;
            swap (A[j],A[i]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}
void quick_sort(int *A,int p,int r)
{
    if(p<r)
    {
        int q=partition(A,p,r);
        quick_sort(A,p,q-1);
        quick_sort(A,q+1,r);
    }
}

int main()
{
    int a[50],n,i;
    cout<<"how many elements : ";
    cin>>n;
    cout<<"\nenter array element : ";
    for(i=0;i<n;i++)

        cin>>a[i];

        quick_sort(a,0,n-1);
        cout<<"\narray after sorting : ";

        for(i=0;i<n;i++)
            cout<<a[i]<< "  " ;

            return 0;


    }


