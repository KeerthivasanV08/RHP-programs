#include<iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;

struct PairComp {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
        if (a.first != b.first) 
            return a.first > b.first;
        return a.second > b.second;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<int, multiset<pair<int,int>>> boxes;
    map<int, multiset<pair<int,int>, PairComp>, greater<int>> chocolates;
    vector<int> chocoWidth(n);
    //vector<int> chocoLength(n);
    vector<int> boxWidth(m);
    //vector<int> boxLength(m);

    for(int i = 0; i < n; i++)cin >> chocoWidth[i];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        chocolates[x*chocoWidth[i]].insert({chocoWidth[i], x});
    }
    for(int i = 0; i < m; i++)cin >> boxWidth[i];
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        boxes[x*boxWidth[i]].insert({boxWidth[i], x});
    }
    
    bool result = true;
    for(auto i:chocolates){
        int cArea = i.first;
        for(auto it: i.second){
            //if(!result)break;
            auto bArea = boxes.lower_bound(cArea);
            if(bArea == boxes.end()){result = false;break;}
            auto b = bArea->second.lower_bound({it.first, it.second});
            if(b == bArea->second.end()){result = false;break;}

            //deletion of found pair (b) done here
            bArea->second.erase(b);
            if (bArea->second.empty())boxes.erase(bArea);
        }
        if(!result)break;
    }
    cout << (result ? "Yes" : "No") << endl;
}
