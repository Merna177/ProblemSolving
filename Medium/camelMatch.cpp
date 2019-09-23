class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        int indx=0;
        vector<bool> v;
        int flag=0;
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<queries[i].size();j++){
                if(indx<pattern.size() && queries[i][j]==pattern[indx])
                    indx++;
                else if(queries[i][j]>='A' && queries[i][j]<='Z')
                    flag=1;
                
            }
            if(indx<pattern.size() || flag==1)
                v.push_back(false);
            else
                v.push_back(true);
            indx=0;
            flag=0;
            
        }
        return v;
    }
};
