#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;cin>>m>>n;
    vector<string> arr(m);
    map<string,int> mp;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        mp[arr[i]] = 0;
    }
    while(n--){
        string str;cin>>str;
        int matches = 0;
        string candidate;
        if(mp.count(str)){
            mp[str] += 1;
        }
        else{
            for(int j=0;j<m;j++){
                int diff = 0;
                if(arr[j].length() != str.length()){
                    continue;
                }
                for(int k=0;k<str.length();k++){
                    if(str[k] != arr[j][k]){
                        diff++;
                    }
                    if(diff>1){
                        break;
                    }
                }
                if(diff == 1){
                    matches++;
                    candidate = arr[j];
                }
                if(matches >1){
                    break;
                }
            }
            if(matches == 1){
                mp[candidate] += 1;
            }
        }
    }
    for(int i=0;i<m;i++){
        cout<<mp[arr[i]]<<endl;
    }
    return 0;
}


