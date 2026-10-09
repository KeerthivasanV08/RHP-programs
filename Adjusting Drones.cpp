#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> arr(n), cnt(n+n+n+1,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
		cnt[arr[i]]++;
	}
	int ans=0;
	for(int val=1;val<=n+n;val++){
		int curr=val;
		while(cnt[curr]>k){
			cnt[curr+1]+=cnt[curr]-1;
			cnt[curr]=1;
			curr++;
		}
		ans=max(ans,curr-val);
	}
	cout<<ans;
}