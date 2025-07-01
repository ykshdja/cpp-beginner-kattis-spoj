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

    int x,y,N;
    int lcm = x*y/gcd(x,y);
    cin>>x>>y>>N;
    for (int i = 1; i < N+1; i++) {
        if (i%y==0 && i%x==0)
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if (i%y==0){
            cout<<"Buzz"<<endl;

        }
        else if(i%x==0){
            cout<<"Fizz"<<endl;
        }
        
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}