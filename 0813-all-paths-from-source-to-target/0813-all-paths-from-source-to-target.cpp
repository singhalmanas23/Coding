class Solution {
public:
    vector<vector<int>>bfs(vector<vector<int>>adj,int n,int src){
        queue<vector<int>>q;
        vector<int>path;
        vector<vector<int>>ans;
        q.push({src});
        while(!q.empty()){
            path=q.front();
            q.pop();
            int v=path.back();
            if(v==n-1){
                ans.push_back(path);
            }
            for(auto ad:adj[v]){
                vector<int>p=path;
                p.push_back(ad);
                q.push(p);
            }
        }
        return ans;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>adj(n,vector<int>());
        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                adj[i].push_back(graph[i][j]);
            }
        }
        return bfs(adj,n,0);
        
    }
};