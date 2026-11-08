#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;cin>>x>>y;
    int n;cin>>n;
    vector<char> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] == 'U'){
            y++;
        }
        if(arr[i] == 'D'){
            y--;
        }
        if(arr[i] == 'L'){
            x--;
        }
        if(arr[i] == 'R'){
            x++;
        }

    }
    cout<<x<<" "<<y;
    return 0;
}
