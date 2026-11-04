//NORMAL MAXHEAP
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    make_heap(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<(i == n-1 ? "":" ");
    }
    return 0;
}


//INSERTION BASED MAX_HEAP
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int elem;cin>>elem;
        arr.push_back(elem);

        int j = arr.size()-1;
        while(j>0 && arr[(j-1)/2]<arr[j]){
            swap(arr[(j-1)/2],arr[j]);
            j = (j-1)/2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<(i == n-1 ? "":" ");
    }
    return 0;
}