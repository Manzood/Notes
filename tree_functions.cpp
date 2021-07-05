#include<cstdio>
#include<vector>
#include<set>
#include<algorithm>
#include<iostream>

using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

vector <int> visited;

int initialisevisited(int n) {
	for (int i=0;i<n;i++) {
		visited.push_back(false);
	}
}

//function to get the depth of each node in the tree
vector<pair<int,int>> getdepth(vector <int> *tree, int node, vector <pair<int,int>> depth, int d) {
	//debug(node);
	//debug(visited[node]);
	if (visited[node])
		return depth;
	if (tree[node].size()==1) {
		depth.emplace_back(node,d);
		return depth;
	}
	visited[node]=true;
	//debug("Made it here");
	for (auto u: tree[node]) {
		//debug(u);
		depth=getdepth (tree, u, depth, d+1);
	}
	depth.emplace_back(node,d);
	//debug(depth.size());
	return depth;
}

int main() {
	int n, k;
	cin>>n>>k;
	vector <int> tree[n];
	int node1,node2;
	for (int i=0;i<n-1;i++) {
		scanf("%d %d",&node1,&node2);
		tree[node1-1].push_back(node2-1);
		tree[node2-1].push_back(node1-1);
	}
	vector <pair<int,int>> depth;
	initialisevisited(n);
	depth=getdepth(tree,0,depth,0);
	debug(depth.size());
	for (int i=0;i<depth.size();i++) {
		printf("%d %d\n",depth[i].first,depth[i].second);
	}
	return 0;
}
