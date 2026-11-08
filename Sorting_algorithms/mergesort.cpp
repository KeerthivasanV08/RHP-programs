#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int low,int high,int mid){
    if(low<high){
        vector<int> temp;
        int i = low,j = mid+1;
        while(i<=mid && j<= high){
            if(arr[i]<arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }
        for(int k=low;k<=high;k++){
            arr[k] = temp[k-low];
        }
    }
}

void mergesort(vector<int>& arr,int low,int high){
    if(low<high){
        int mid = low+(high-low)/2;

        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,arr.size()-1);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}