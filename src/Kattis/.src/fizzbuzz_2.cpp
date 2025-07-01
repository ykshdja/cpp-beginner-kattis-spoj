#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    //n-row,m-col
    int res=0;
    int resVal=-1;
    for (int j = 0; j<=n;j++) {
        int att=0;
        for (int i = 0; i <=m; i++) {
            string s;
            cin>>s;
            string ans="";
            if(i%3==0){
                ans+="fizz";
            }
            if(i%5==0){
                ans+="buzz";
            }
            if(ans==""){
                ans= to_string(i);
            }
            if(s==ans){
                att++;
            }
        }
        if(att>resVal){
            resVal=att;
            res=j;
        }
    }
    cout<<res<<endl;

    return 0;
}