class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> q;
        int arr[128]={0};
        for(int i=0;i<s.size();i++){
            arr[s[i]]++;
         
        }
        for(int i=0;i<128;i++){
            if(arr[i]!=0){
                char a = (char)(i);
                q.push(make_pair(arr[i],a));
                
            }
        }
        string ret="";
        while(!q.empty()){
            int cnt=q.top().first;
            char a  = q.top().second;
            q.pop();
            while(cnt--){
                ret+=a;
            }
        }
        return ret;
    }
};
