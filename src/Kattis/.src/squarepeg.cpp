#include<iostream>
#include<algorithm>
using namespace std;

const int Pi = 3.14;

int main()
{
    int t;
    int l,r;
    while(t--){
        cin>>l>>r;
    }
    int areaSqr;
    int areaCrcl;
    areaSqr = l*l;
    areaCrcl = int (3.14*(r*r));
   if (areaSqr <= areaCrcl) {
        cout << "fits" << '\n';
    }
    else {
        cout << "nope" << '\n';
    }
    return 0;
}