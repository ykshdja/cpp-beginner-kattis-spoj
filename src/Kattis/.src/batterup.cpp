#include <iostream>
#include<iomanip>
#include"include/myheader.h"

using namespace std;


/**
 * 
 * The input is composed of two lines. The first line contains a single positive integer 
 (
) that specifies the number of at-bats. The second line contains 
 integers, separated by spaces, each describing one of those at-bats. Strike-outs, singles, doubles, 
 triples, and home runs are represented as 0, 1, 2, 3, 4, respectively. Walks are represented as -1. 
 You may assume that there will always be at least one official at-bat
  (i.e., at least one at-bat will not be a walk).
 * 
 * 
 */

int main() {
 int n;
 cin>>n;
 double count, total=0;
 for(int i=0;i<n;i++)
 {
    int at_bat;
    cin>>at_bat;
    if(at_bat!=-1)
    {
        count+=1;
        total+=at_bat;
    }
 }
    double slug_ratio = total/count;
    //cout<<slug_ratio<<endl;
     //cout << fixed << setprecision(6) << slug_ratio << endl;
cout << setprecision(17) << (double) slug_ratio << endl;

}