#include<iostream>
#include<algorithm>
#include"include/myheader.h"
using namespace std;
void printInnerRow(int col, int subCol){
    cout<<"*";
    for(int i=0;i<col;i++){
        for(int sc=0;sc<subCol;sc++){
            cout<<".";
        }
        cout<<"*";
        
    }
    cout<<endl;
}
void printStartRow(int col, int subCol){
    cout<<"*";
    for(int i=0;i<col;++i)
    {
        for(int sc=0;sc<subCol+1;++sc){
            cout<<"*";
        }
        
    }
    cout<<endl;
    
}
int main()
{ 
   int t;
   cin>>t;
  while (t--)
  {
    int row,col,subRow,subCol;
    cin>>row>>col>>subRow>>subCol;
    printStartRow(col,subCol);
    for(int r=0;r<row;++r){
        for(int sr=0;sr<subRow;++sr)
        {
            printInnerRow(col,subCol);
        }
        printStartRow(col,subCol);
    }
    cout<<endl;
  }
  
  
    
    return 0;
}