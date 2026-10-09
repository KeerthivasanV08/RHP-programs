#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int target;cin>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lt = 0;int rt = n-1;
    while(lt+1<rt){
        int mid = (lt+(rt-lt))/2;
        if(arr[mid]<target){
            lt = mid;
        }
        else{
            rt = mid;
        }
    }
    cout<<((arr[lt] == target) ? lt : (arr[rt] == target) ? rt : -1);
    return 0;
}
