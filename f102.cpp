#include <bits/stdc++.h>

using namespace std;

const int N=2e5+5;

bool flag;

vector<int> g[N];

bool visited[N];

void dfs(int u){
	if(g[u].size()!=2) flag=0;
	for(auto v: g[u]){
		if(!visited[v]){
			visited[v]=true;
			dfs(v);
		}
	}
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	while(m--){
		int a, b;
		scanf("%d%d", &a, &b);
		g[a].push_back(b);
		g[b].push_back(a);
	}
	int ans=0;
	for(int i=1; i<=n; ++i){
		if(!visited[i]){
			flag=true;
			visited[i]=true;
			dfs(i);
			if(flag) ++ans;
		}
	}
	printf("%d\n", ans);
}