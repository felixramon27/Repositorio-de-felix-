#include <iostream>
#include <vector>

using namespace std;
int n,m;
int visit[200000];
vector<int> g[200000];

void dfs(int v){ 
  visit[v]=1;
  for(int u:g[v]){
    if(!visit[u]){
      dfs(u);
    }
  }
}

int main(){

  cin>>n>>m;
  
  for(int i=0;i<m;i++){
      int a,b;
      cin>>a>>b;
      g[a].pb(b);
      g[b].pb(a);
  }

}
