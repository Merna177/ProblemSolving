class Solution {
public:
    
    int getNumber(string &s, int &i){
        int cnt = 0;
        while(s[i] >= '0' && s[i] <= '9'){
            cnt = cnt * 10 + s[i++] - '0';
        }
        return cnt;
    }
    string decodeString(string s) {
        
        if(s.size() == 0) return "";
        
        
        stack<int> nums;
        stack<string> buffers;
        
        
        int multiplier =  -1;
        string buffer = "";
        
        int i = 0;
        while(i < s.size()){
            /**
            if a number is encountered, we push the existing multiplier and 
            buffer to the stack.
            The new multiplier is the number and the new buffer is "" (empty);
            */
            if(s[i] >= '0' && s[i] <= '9'){
                nums.push(multiplier);
                buffers.push(buffer);
                buffer = "";
                multiplier = getNumber(s, i);   
            }
            else if(s[i] == '[') {}
            
            else if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
                buffer += s[i];
            }
            else if(s[i] == ']'){
                string temp = "";
                while(multiplier--) temp += buffer;
                
                multiplier = nums.top();
                buffer = buffers.top() + temp;
                nums.pop();
                buffers.pop();
            }
            i++;
        }
        
        
        return buffer;
    }
};
