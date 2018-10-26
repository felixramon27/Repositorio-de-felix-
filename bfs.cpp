#include <iostream>
#include <vector>
#include<queue>

using namespace std;

int n,m;
vector<int> g[20000];
visit[200000];

void bfs(){
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    int v = q.front();
    q.pop();
    if(visit[v]) continue;
    visit[v]=1;
    for(int u:g[v]){
      if(!visit[u]){
        q.push(u);
      }
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
  bfs();
}
