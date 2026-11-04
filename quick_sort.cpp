#include <bits/stdc++.h>
using namespace std;


int partition(vector<int>& arr,int low,int high){
    int pivot =  arr[high];
    int p = low;
    if(low<high){
        for(int j=low;j<high;j++){
            if(arr[j]<=pivot){
                swap(arr[j],arr[p]);
                p++;
            }
        }
        swap(arr[p],arr[high]);
    }
    return p;
}
    

vector<int> quicksort(vector<int>& arr,int left,int right){
    if(left<right){
        int p = partition(arr,left,right);
        quicksort(arr,left,p-1);
        quicksort(arr,p+1,right);
    }
    return arr;
}


int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,arr.size()-1);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}