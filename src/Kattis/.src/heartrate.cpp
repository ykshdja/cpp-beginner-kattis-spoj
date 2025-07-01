#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
   int t;cin>>t;
   double b,p;
   while(t--){
    cin>>b>>p;
     cout << (b - 1) * 60 / p << ' ' << b * 60 / p << ' ' << (b + 1) * 60 / p
         << '\n';
   }

    return 0;
}