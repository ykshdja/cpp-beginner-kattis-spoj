#include<iostream>
#include "include/myheader.h"
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int line, col;
        cin>>line>>col;
        for(int i=0;i<line;i++){
            for(int j=0;j<col;j++)
            {   if((i+j)%2==0)
                {
                    cout<<"*";
                }else{
                    cout<<".";
                }

            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}