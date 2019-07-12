class Solution {
public:
    bool isValid(string S) {
        if(S.size()%3)return false;
        stack<bool> s;
        for(int i=0;i<S.size();i++){
            if(S[i]=='a'){
                s.push(false);
                
            }
            else if(S[i]=='b'){
                if(s.empty() || s.top() )return false;
                s.top()=true;
            }else if(S[i]=='c'){
                if(s.empty() || !s.top())return false;
                s.pop();
            }
        }
        if(s.empty())return true;
        else
            return false;
    }
};
