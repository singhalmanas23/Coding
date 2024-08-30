//Bitonic Array m first element increasing  and ek point k baad then decreasing ...
//question is to find maximum element of bitonic array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1, 3, 8, 12, 4, 2};
    int start=0;
    int n=6;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<arr[mid]<<endl;
            break;
        }
        else if(arr[mid-1]>arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return 0;

}
