class Solution {
public:
    int titleToNumber(string s) {
        long long j=1;
        long long res=0;
        for(int i=s.size()-1;i>=0;i--){
            res+= ((s[i]-'A')+1)*j;
            j*=26;
        }
        return res;
    }
};
