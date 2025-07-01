#include<iostream>
#include<algorithm>
#include<string>
#include"include/myheader.h"
using namespace std;

int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {  string str;
        cin>>str;
        int k=str.length()/2;
        for (int i = 0; i < k; i+=2) {
            cout<<str[i];
        }
        cout<<endl;
    }
      return 0;  
}
    
    
