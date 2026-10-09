#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int K;cin>>K;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int left = 0;int right = n-1;int k=0;
    while(left<=right){
        int val = arr[left]+arr[right];
        if(val<=K){
            k++;
            left++;
            right--;
        }
        if(val>K){
            k++;
            right--;
        }
    }
    cout<<k;
    return 0;


}