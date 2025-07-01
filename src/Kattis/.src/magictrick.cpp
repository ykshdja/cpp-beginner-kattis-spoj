#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    //If there are two identical str[i]==str[j] -> output - 0
    string str;cin>>str;
    int N = int(str.length());
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (str[i]==str[j])
            {
                cout<<0<<endl;
                return 0;
            }
            
        }
        
    }
  cout<<1<<endl;
}