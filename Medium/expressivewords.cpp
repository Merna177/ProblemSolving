class Solution {
public:
    int expressiveWords(string S, vector<string>& words) {
        int ret = 0;
        for (int cnt=0;cnt<words.size();cnt++) {
            string word = words[cnt];
            int i=-1;
            int j=-1;
            int Ssize = S.length();
            int wordsize = word.length();
            bool flag = true;
            while (i<Ssize && j<wordsize) {
                i++;
                j++;
                if (S[i] == word[j]) {
                    continue;
                }
                if (i == 0) {
                    flag = false;
                    break;
                }
                if (S[i] == word[j-1]) {
                    int repeatCounter = 2;
                    i++;
                    while (i<S.length() && S[i] == word[j-1]) {
                        repeatCounter++;
                        i++;
                    }
                    int k=j-2;
                    while (k >= 0 && word[k] == word[j-1]) {
                        repeatCounter++;
                        k--;
                    }
                    if (repeatCounter < 3) {
                        flag = false;
                        break;
                    }
                } else {
                    flag = false;
                    break;
                }
               
            }
            if (flag && i==S.size() && j=word.size()) {
                ret++;
            }
        }
        return ret;
    }
};
