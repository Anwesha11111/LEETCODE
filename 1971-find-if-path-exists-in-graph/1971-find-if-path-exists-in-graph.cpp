class Solution {
    public:
 
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       vector<vector<int>>graph(n);
       for(auto & edge:edges){
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
       }
       vector<bool> visited(n,false);
       stack<int> st;
       st.push(source);
       while(!st.empty()){
      int node=st.top();
      if(node==destination)
      return true;
      st.pop();
        if(visited[node])
        continue;
        visited[node]=true;
        for(auto &n:graph[node]){
            if(!visited[n])
            st.push(n);
        }
       }
       return false;
    }
};