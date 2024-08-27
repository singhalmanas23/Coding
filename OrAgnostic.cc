// In this question we dont know whether the array is sorted in ascending order or descending order...
// so the approach is to compare last and first element 
// if arr[0]<arr[N-1] so the array is in asceding order else in descending order

#include<iostream>
using namespace std;
bool AscBinary(vector<int>arr,int K,int start,int end){
    if(start>end) return false;
    int mid=start+(end-start)/2;
    if(arr[mid]==K)return true;
    if(arr[mid]>K){
        return AscBinary(arr,K,start,mid-1);
    }
    else{
        return AscBinary(arr,K,mid+1,end);
    }
}
bool DscBinary(vector<int>arr,int K,int start,int end){
    if(start>end)return false;
    int mid=start+(end-start)/2;
    if(arr[mid]==K)return true;
    if(arr[mid]>K){
        return DscBinary(arr,K,mid+1,end);
    }
    else{
        return DscBinary(arr,K,start,mid-1);
    }
}
bool orderNotKnown(vector<int>arr,int K){
    bool ans;
    int start=0;
    int N=arr.size();
    int end=N-1;
    if(arr[0]<arr[N]){
        ans=AscBinary(arr,K,start,end);
    }
    else{
        ans=DscBinary(arr,K,start,end);
    }
    return ans;
}