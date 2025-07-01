#include<iostream>
#include<algorithm>
using namespace std;

int factorial(int n){
    if(n<=1) {
        return 1;
    }
    return n*factorial(n-1);
}


int main()
{
    int T;
    int n;
    cin>>T;
    while(T--){
        cin>>n;
        cout<<factorial(n)%10<<endl;
    }
    
    return 0;
}