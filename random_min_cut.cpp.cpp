#include<bits/stdc++.h>
using namespace std;

int make(int i,vector<int>&par,vector<int>&rank){
    par[i]=i;
    rank[i]=1;
}

int find(int v,vector<int>&par){
    if(par[v]==v) return v;
    return par[v]=find(v,par);
}

void unite(int x, int y) {
        int s1 = find(x), s2 = find(y);
        if (s1 != s2) {
            if (rank[s1] < rank[s2]) par[s1] = s2;
            else if (rank[s1] > rank[s2]) par[s2] = s1;
            else par[s2] = s1, rank[s1]++;
        }
 }
int main()
{
    int n,m,node=0;
    cin>>n>>m;
    int u,w;
   vector<pair<int,int>>v,l;
   vector<vector<int>>edg(n),gn;
   for(int i=0;i<m;i++){
        cin>>u>>w;
        v.push_back({u,w});
        edg[u].push_back(w);
   }
    node=n;
    int k=n+1;
    vector<int>par(n),rank(n,0);
    for(int i=0;i<n;i++) make(i);
while(1){
   
      int a=it.first,b=it.second;
         edg[a].erase(b);
       for(auto it : edg[b]){
           if(find(it)!=a){
            par[it]=a;
            edg[a].push_back(it);
            edg[b].erase(it);
            unite(a,b);
            node--;
       }
     if(node==2) break;
     v.clear();
     for(int i=0;i<edg.size();i++){
       if(it.size()>1){
         for(auto y : )
      }
}
}
}
