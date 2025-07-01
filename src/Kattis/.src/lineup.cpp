#include <iostream>
#include <algorithm>

using namespace std;

bool isStrictlyDecreasingStringArray(string str[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (str[i] <= str[i + 1]) {
            return false;
        }
    }
}


int main()
{
   int n; cin >> n;
    vector<string> ar(n);
    for (string &s : ar) cin >> s;

    bool isIncrease = 1;
    bool isDecrease = 1;
    for (int i = 1; i < n; i++) {
        isIncrease &= (ar[i-1] < ar[i]);
        isDecrease &= (ar[i-1] > ar[i]);
    }

    if (isIncrease) cout << "INCREASING";
    else if (isDecrease) cout << "DECREASING";
    else cout << "NEITHER";
    cout << "\n";
    
    
    return 0;
}
