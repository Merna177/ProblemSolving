class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
          map<int,int> mp;
    map<int,int> freq;
    
    for(int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
    }
    
    for (auto it : mp)
    {
        freq[it.second]++;
    }
    
    
  if(mp.size()==freq.size())
      return true;
    else 
        return false;
    
    
}
};
