class Solution {
public:
    string minWindow(string S, string T) {
        int m = S.size(), n = T.size();
        if (n <= 0 || m < n) return "";

        int mp[128] = {0}; 
        for (int i = 0; i < n; ++i) mp[T[i]]++;    

        int count = 0;
        int minLen = INT_MAX, minIndex = -1;
        for (int start = 0, end = 0; end < m; ++end) {
            mp[S[end]]--;  
            if (mp[S[end]] >= 0) count++;   
            while (count == n) {   
                if (end - start + 1 < minLen) {  
                    minLen = end - start + 1;     
                    minIndex = start;  
                }
                mp[S[start]]++;  
                if (mp[S[start]] > 0) count--; 
                start++;    
            }
        }
        if(minIndex ==-1)
            return "";
        else 
        return  S.substr(minIndex, minLen);
    }
};
