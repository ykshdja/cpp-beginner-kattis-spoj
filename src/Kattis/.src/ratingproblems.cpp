#include<iostream>
#include<algorithm>
#include "include/myheader.h"
#include<iomanip>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  double total=0;
 for (int i = 0; i < k; i++) {
  int x;
  cin>>x;
  total+=x; // for the 1st case - 3

 }

double min=(double)(total+(-3*(n-k)))/n;
double max=(double)(total+(3*(n-k)))/n;
	cout << min << " " << max << "\n";
    return 0;
}