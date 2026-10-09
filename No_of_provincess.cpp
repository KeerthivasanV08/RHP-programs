class solution{

vector<int> parent;

int find(int x){
   if(parent[x] != x){
       parent[x] = find(parent[x]);

   }
   return parent[x];


}

void unite(int x,int y){
    int px = find(x);
    int py = find(y);

    if(px != py){
        parent[py] = px;
    }


}

int findcircleNum(vector<vector<int>>& isconnected){
     int n = isconnected.size();
     parent.resize(n);
     for(int i =0;i<n;i++){
        parent[i] = i;
     }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++{
           if(isconnected[i][j] = 1){
            unite(i,j);
           }
        }
     }
     int provinces = 1;
     for(int i=0;i<n;i++){
        if(find(i) == i){
            provinces++;
        }
     }
     return provinces;




}


}
