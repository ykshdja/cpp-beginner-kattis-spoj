#include<iostream>
#include"include/myheader.h"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,c;
        cin>>l>>c;
        for(int i=0;i<(3*l+1);i++)
        {
            for(int j=0;j<(3*c+1);j++)
            {
                if((i%3==0) || (j%3==0)){
                    cout<<"*"; // After every 3rd line continous Star pattern repeats
                    //For Every value of J (in every row - j%3==0)
                    /**
                     * i=1,j=0 -> "*"
                     * i=1,j=1 ->1%3==1 not equal to 0 -> "."
                     * i=1,j=2 ->2%3==2 not equal to 0 -> "."
                     * i=1, j=3 -> 3%3==0 equal to 0 ->"*"
                     */
                }
                else{
                    cout<<".";
                }
            }cout<<endl;
        }
        cout<<endl;
    }
    
    
    return 0;
}