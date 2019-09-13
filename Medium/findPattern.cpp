class Solution {
public:
   string codeIt(string w){
            int arr[26];
            memset(arr,-1,sizeof arr);
            string encoded="";
            for(int i=0;i<w.size();i++){
                if(arr[w[i]-'a']==-1){
                  arr[w[i]-'a']=i;
                }
                encoded+= std::to_string(arr[w[i]-'a']);
            }
            return encoded;
   }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string encodedPattern = codeIt(pattern);
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            if(codeIt(words[i])==encodedPattern)
                ans.push_back(words[i]);
        }
        return ans;
    }
};
