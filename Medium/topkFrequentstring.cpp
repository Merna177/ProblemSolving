class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(string& word : words) {
            mp[word] ++;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, MyComp> pq;
        for(auto it = mp.begin(); it != mp.end(); ++it) {
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > k) pq.pop();
        }
        vector<string> ret;
        while(!pq.empty()) {
            ret.insert(ret.begin(), pq.top().second);
            pq.pop();
        }
        return ret;
    }
private:
    struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };
};
