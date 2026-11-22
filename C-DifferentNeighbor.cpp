#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> color(n);
    for(int i=0;i<n;i++){
        cin>>color[i];
    }
    vector<int> left(n,INT_MAX);
    vector<int> right(n,INT_MAX);
    int last = -1;
    for(int i=0;i<n;i++){
        if(i>0 && color[i] != color[i-1]){
            last = i-1;
        }
        if(last != -1){
            left[i] = i-last;
        }
    }
    last = -1;
    for(int i =n-1;i>=0;i--){
        if(i<n-1&& color[i] != color[i+1]){
            last = i+1;
        }
        if(last != -1){
            right[i] = last-i;
        }
    }
    for(int i=0;i<n;i++){
        cout<<min(left[i],right[i])<<" ";
    }
    cout<<endl;
    return 0;
}