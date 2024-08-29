// Basically in this question we dont know the size of array or say its infinite and we need to find the element in the sorted array.
// So the approach is to take the start at 0 and end at 1 and then check nif key exist between start and end if not exist in the between we will assign the cuurent end to start and end with 2*end; and when we find ignore the rest and apply binary searchbon the given...
#include <iostream>
using namespace std;
int binary(vector<int>arr,int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
      

    }
      return -1;
}
int infinArray(vector<int>arr,int key){
    int start=0;
    int end=1;
    while(key>arr[end]){
        start=end;
        end=end*2;
    }
    int ans=binary(arr,start,end,key);
    return ans;
    
}
int main(){
    vector<int>arr;
}
