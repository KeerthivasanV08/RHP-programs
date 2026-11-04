//KNIGHTS TOUR
#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>& matrix,int n,int row,int col,int k){
    matrix[row][col] = k;
    if(k == n*n)return true;
    int diff[8][2] = {{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
    for(int i=0;i<8;i++){
        int dr = row+diff[i][0],dc = col+diff[i][1];
        if(dr>=0 && dr<n && dc>=0 && dc<n && matrix[dr][dc] == -1){
            if(dfs(matrix,n,dr,dc,k+1)){
                return true;
            } 
        }
    }
    matrix[row][col] = -1;
    return false;
}

int main(){
    int n;cin>>n;
    int row,col;cin>>row>>col;
    vector<vector<int>> matrix(n,vector<int>(n,-1));
    if(dfs(matrix,n,row,col,1)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<(j == n-1 ? "":" ");
            }
            cout<<endl;
        }
    }
    else{
        cout<<"No valid tour"<<endl;
    }
    return 0;
}










//SYMMENTRY CHECK
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node*left;
    Node* right;
    Node(int v){
        val = v;
        left = right = nullptr;
    }
};

bool ismirror(Node* root1,Node* root2){
    if(root1 == nullptr && root2 == nullptr){
        return true;
    }
    else if(root1 == nullptr || root2 == nullptr){
        return false;
    }
    else if(root1->val != root2->val){
        return false;
    }
    bool first = ismirror(root1->left,root2->right);
    bool second = ismirror(root1->right,root2->left);
    return first && second;
}

int main(){
    vector<string> arr;
    string elem;
    while(cin>>elem && elem != "-1"){
        arr.push_back(elem);
    }
    Node* root = new Node(stoi(arr[0]));
    queue<Node*> q;
    q.push(root);
    int i = 1;
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        if(i<arr.size() && arr[i] != "null"){
            curr->left = new Node(stoi(arr[i]));
        }
        i++;
        if(i<arr.size() && arr[i]!="null"){
            curr->right = new Node(stoi(arr[i]));
        }
        i++;
    }
    cout<<ismirror(root->left,root->right)<<endl;
    return 0;
}


//MAX_DEPTH
#include <bits/stdc++.h>
using namespace std;

int f(){
    int n;cin>>n;
    if(n == -1){
        return 0;
    }
    int left = f();
    int right = f();
    return 1+max(left,right);
}



int main(){
    cout<<f()<<endl;
    return 0;
}