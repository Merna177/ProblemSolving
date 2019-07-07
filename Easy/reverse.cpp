class Solution {
public:
    string reverseWords(string s) {
        string temp="" ;
        vector<string> words;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ')
            {
                words.push_back(temp);
                temp ="";
            }else {
                temp +=s[i];
            }
        }
        words.push_back(temp);
        temp="";
        for(int i=0;i<words.size();i++){
            for(int j=words[i].size()-1;j>=0;j--){
                temp+=words[i][j];
            }
            if(i != words.size()-1)
            temp+= " ";
        }
        return temp;
    }
};
// solve -->https://leetcode.com/problems/reverse-words-in-a-string-iii/ 
