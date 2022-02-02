#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],n,i,loc,item,beg,end,mid;
    printf("how many element enter the array");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
        scanf("%d",& a[i]);

    }
    printf("enter element to be search :");
    scanf("%d",& item);
    beg=0,end=n-1;
    while((beg<=end))
    {
        mid=(beg+end)/2;
        if(item==a[mid])
        {
            printf("search seccessfully");
            loc=mid+1;
            printf("location is % d ",loc);
            break;
        }
        else if(item <a[mid])
        end=mid-1;
        else
            beg =mid+1;
    }
    if(loc=0)
        printf("item not found in the array");
    getch ();
}
