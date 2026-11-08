#include <bits/stdc++.h>
using namespace std;

int main(){
    string str,need;
    getline(cin,str);cin>>need;
    stringstream ss(str);
    vector<string> words;
    string word;
    while(ss>>word){
        words.push_back(word);
    }
    for(int i=0;i<words.size();i++){
        if(words[i].find(need) != string::npos){
            reverse(words.begin()+i,words.end());
            break;
        }
    }
    for(string word:words){
        cout<<word<<" ";
    }
    return 0;
}