class Solution {
public:
    vector<vector<int>> adj;
    vector<int> fromBob;
    int bNode;

    int dfs(int u, int par, int depth, vector<int>&amount){
        int ret = 0;
        if(u == bNode) fromBob[u] = 0;
        else fromBob[u] = amount.size();
        int maxChild = -INT_MAX;
        for(int v:adj[u]){
            if(v == par) continue;
            maxChild = max(maxChild, dfs(v, u, depth+1, amount));
            fromBob[u] = min(fromBob[u], fromBob[v] + 1);
        }
        if(fromBob[u] > depth) ret+= amount[u];
        else if(fromBob[u] == depth) ret += amount[u] / 2;
        if(maxChild == -INT_MAX) return ret;
        else return ret+maxChild;
    }
    
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n = amount.size();
        bNode = bob;
        adj.resize(n, vector<int>());
        for(auto& e: edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        fromBob.resize(n);
        return dfs(0,0,0, amount);
    }
};