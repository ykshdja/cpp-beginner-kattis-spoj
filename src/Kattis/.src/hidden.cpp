
/***
 * hiddenPassword - Kattis
 * Lvl - 2.2
 * multiset<char> is an associative container
 * Store Multiple elements with the same value
 * (ascending by default) - implemented as a balanced BST.
 * Inserting duplicate elements always sorted.
 * multiset is always sorted.
 * 
 * 
 
 #include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <map>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;cin>>a>>b;
    multiset<char> mset;
    for (int i = 0; i < a.size(); i++) {
        mset.insert(a[i]);
        //.. populate mset with string chars - a
    }
    bool ans = true;
    for(int i=0,j=0; i<a.size() && j<b.size();++j)
    {
        //a[i] and b[j] - are not equal and check how many times b[j] appears in the multiset.
        if(a[i]!=b[j] && mset.count(b[j])){
            ans=false;
            break;
        }
        else if(a[i]==b[j])
        {
            mset.erase(mset.find(a[i]));
            ++i;
        }
    }
    cout<<(mset.empty()?"PASS":"FAIL")<<'\n';




    return 0;
}

*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string pass;cin>>pass;
    string message;cin>>message;
    for (int i = 0; i < message.length(); i++) {
        char a = message[i];
    }
    
    return 0;
}