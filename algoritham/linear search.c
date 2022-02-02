#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],n,i,loc=0,item;
    printf("how many elements : ");
    scanf("%d",&n);
    printf("enter the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to be srearched");
    scanf("%d", & item);
    printf("linear search");
    for(i=0;i<n;i++)
    {
        if(arr[i]=item)
        {
            loc=i+1;
            break;
        }
    }
    if(loc>0)
        printf("search succesfully ,item found ",loc);
    else
        printf("search unsuccesfull");
    getch ();
}
