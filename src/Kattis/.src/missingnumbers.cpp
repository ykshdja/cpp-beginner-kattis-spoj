#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MOD = 1e9 + 7;
int n;
int a[210];
bool vst[210];

int main()
{
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        vst[a[i]] = true; //boolean Array - initialized to true;
    }
    bool flag = false;
    for (int i = 1; i < a[n-1]; i++) { // array - sorted 
        if(!vst[i]){
            flag = true;
            cout<<i<<endl;
        }
    }
    if(!flag){
        cout<<"good job\n";
    }

    
    return 0;
}