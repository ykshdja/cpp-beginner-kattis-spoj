#include<iostream>
#include "include/myheader.h"
using namespace std;

int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    if(a>=1 && a<=b && b<=100)
    {
        for( int i=a;i<=b;i++){
            sum=sum+(i*i);

                }
                cout<<sum;
    }
    return 0;
}