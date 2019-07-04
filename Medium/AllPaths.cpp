class Solution {
public:
   vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int> > output;
        vector<int> path;
        path.push_back(0);
        //for (auto i : graph[0]) {
         //   path.push_back(i);
            go(0,graph, path, output);
          //  path.pop_back();
        //}
        return output;
    }
    void go(int node,vector<vector<int>>& graph,vector<int>& path, vector<vector<int> >& output) {
        if (node == graph.size() - 1) {
            output.push_back(path);
            return;
        }
        for (int i=0;i<graph[node].size();i++) {
            path.push_back(graph[node][i]);
            go(graph[node][i],graph,path, output);
            path.pop_back();
        }
    }
};
