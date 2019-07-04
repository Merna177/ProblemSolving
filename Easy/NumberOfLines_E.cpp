class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int lines=0;
        int cnt=0; 
        for(int i=0;i<S.size();i++){
            if(widths[S[i]-'a']+cnt >100){
                lines++;
                cnt = widths[S[i]-'a'];
            }else {
                cnt += widths[S[i]-'a'];

            }
        }
        if(cnt!=0)lines++;
        vector<int> output;
        output.push_back(lines);
        if(cnt==0)output.push_back(100);
        else
            output.push_back(cnt);
        return output;
    }
};
