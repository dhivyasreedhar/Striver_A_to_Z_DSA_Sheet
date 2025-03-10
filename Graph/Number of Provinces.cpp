#TC: O(n)+O(V+2E)
#SC: O(N)+O(N)// recursion +vis arr

class Solution {
public:
    void dfs(vector<vector<int>> &adjl,vector<int> &vis,int node){
        vis[node]=1;
        for(auto it:adjl[node])
        {
            if(!vis[it])
            dfs(adjl,vis,it);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<vector<int>>adjl(v);
        for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
        if(isConnected[i][j]==1)
        {adjl[i].push_back(j);
        adjl[j].push_back(i);}

        vector<int> vis(v, 0);int cnt=0;
        for(int i=0;i<v;i++){
            if(!vis[i])
            {
                cnt++;
                dfs(adjl,vis,i );
            }
        }

        return cnt;
        
    }
};
