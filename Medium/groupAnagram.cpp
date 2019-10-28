class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& W) {
	vector<vector<string>> sol;
	unordered_map<string, vector<string>> mp;
	for (auto w : W) {
		string key = w;
		sort(key.begin(), key.end());
		if (mp.find(key) == mp.end()) { mp[key].push_back(w); }
        else
		mp[key].push_back(w);  
	}
	for (auto it : mp) { sol.push_back(it.second); }
	return sol;
}
};
