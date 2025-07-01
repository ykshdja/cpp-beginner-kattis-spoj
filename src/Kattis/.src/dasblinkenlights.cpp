#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    const int n=100;
    int p,q,s;
    cin>>p>>q>>s;
    
    if(p*q/gcd(p,q)<=s){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    
    return 0;
}