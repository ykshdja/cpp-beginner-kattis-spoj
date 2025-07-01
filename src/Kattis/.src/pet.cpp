#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    const int MAX_ROW=5;
    const int MAX_COL=4;
    int arr[MAX_ROW][MAX_COL];
    //input array into 2d array.
    for (int i = 0; i < MAX_ROW; i++) {
        for (int j = 0; j < MAX_COL; j++) {
            cin >> arr[i][j];
            //cout<<arr[i][j]<<" ";
        }
        //cout<<endl;
    }
    int maxRowSum=0;
    int maxRowIndex=-1;
    for (int i = 0; i <MAX_ROW; i++) {
        int sum=0;
        for (int j = 0; j < MAX_COL; j++) {
            sum+=arr[i][j];
        }
         if (sum > maxRowSum) {
            maxRowSum = sum;
            maxRowIndex=i+1;
        }
        //cout<< i <<" "<<sum<<endl;
    }
    cout<<maxRowIndex<<" "<<maxRowSum<<endl;
   
    
    return 0;
}