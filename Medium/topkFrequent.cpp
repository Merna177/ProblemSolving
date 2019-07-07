class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    priority_queue<pair< int, int>> pq;
    unordered_map<int, int>::iterator itr; 
    for (itr = mp.begin(); itr != mp.end(); ++itr)  {
        pq.push(make_pair(itr->second,itr->first));
    }
    vector<int> output;
    while(k--){
        output.push_back(pq.top().second);
        pq.pop();
    }
    return output;
        
        }
};
