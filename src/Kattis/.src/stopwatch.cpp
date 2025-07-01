#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int numTimes;cin>>numTimes;
    int sum=0;
    if(numTimes%2!=0)
        {
            cout<<"still running"<<endl;
        }
   else if(numTimes%2==0){
    for (int i = 1; i < numTimes; i+=2) {
        int time;
        int start,stop;cin>>start>>stop;
        time=abs(stop-start);
        sum+=time;
    }
     cout<<sum<<endl;
    
   }
    return 0;
}