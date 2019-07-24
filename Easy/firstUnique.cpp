class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        memset(arr,0,sizeof arr);
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(arr[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
        
    }
};
