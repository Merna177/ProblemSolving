class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<pair<int,int> > s;
        vector<int> ret;
        ret.push_back(0);
        //pair for number and its position
        s.push(make_pair(T[T.size()-1],T.size()-1));
        for(int i=T.size()-2;i>=0;i--){
            int flag=0;
            while(!s.empty()){
                if(s.top().first <= T[i])
                    s.pop();
                else {
                    flag=1;
                    ret.push_back((s.top().second-i));
                    s.push(make_pair(T[i],i));
                    break;
                }
            }
            if(flag==0){
                ret.push_back(0);
                s.push(make_pair(T[i],i));
            }
        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
};
