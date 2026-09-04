class Solution {
    public:
 
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
        for(auto &e:edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        vector<bool> visited(n,false);
        stack<int>st;
        st.push(source);
        while(!st.empty()){
int node=st.top();st.pop();
if(node==destination) 
return true;
if(visited[node]){
continue;}
visited[node]=true;
for(int n:graph[node]){
    if(!visited[n])st.push(n);
}
        }
        return false;
    }
};