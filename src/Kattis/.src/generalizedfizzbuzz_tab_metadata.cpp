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

    int a,b,N;
    cin>>N>>a>>b;
    int countF=0, countB=0, countFB=0;
    for (int  i = 1; i < N; i++)
    {
        if(i%a==0 && i%b==0)
        {
            countFB++;
            
        }
        else if (i%a==0){
           countF++;
           
        }
        else if(i%b==0){
            countB++;
        }
        else{
            continue;
        }
    }
    cout<<countF << " " <<countB << " "<<countFB<<endl;
  
    return 0;
}