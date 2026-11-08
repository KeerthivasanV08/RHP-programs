#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int> result(n);
    int left = 0;int right = n-1;int k=0;
    while(left<=right){
        if(k%2 == 0){
            result[k++] = arr[right--];
        }
        else{
            result[k++] = arr[left++];
        }
    }
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
}