#include <bits/stdc++.h>
using namespace std;

void findtargetsubsets(vector<int> &nums,int index,int target,vector<int> &current){
    if(target == 0){
        cout<<"[";
        for(int x : current){
            cout<<x<<" ";
        }
        cout<<"]";
        cout<<endl;
        return;
    }

    if(index == nums.size() || target <0){
        return;
    }
    current.push_back(nums[index]);
    findtargetsubsets(nums,index+1,target-nums[index],current);

    current.pop_back();
    findtargetsubsets(nums,index+1,target,current);
}



int main(){
    int size;
    cin>>size;
    vector<int> nums(size);
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    vector<int> current;
    int target;cin>>target;
    findtargetsubsets(nums,0,target,current);
    return 0;
}