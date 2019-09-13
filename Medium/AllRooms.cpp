class Solution {
public:
    set<int> s;
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int source =0;
        dfs(source,rooms);
        if(s.size()==rooms.size())
            return true;
        else
            return false;
    }
    void dfs(int source,vector<vector<int>>& rooms){
        s.insert(source);
        for(int i=0;i<rooms[source].size();i++){
            if(s.find(rooms[source][i])!=s.end())
                continue;
            else
            {
                dfs(rooms[source][i],rooms);
            }
        }
    }
};
