#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str1[]="Hello Geeks!";
    char str2[] = "GeeksforGeeks";
    char str3[40];
    char str4[40];
    char str5[] = "GfG";

    strcpy(str1, str2);
    strcpy(str3, "Copy successful");
    strcpy(str4, str5);
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    //cout<<str4<<endl;
    cout<<str5<<endl;
    return 0;
}
