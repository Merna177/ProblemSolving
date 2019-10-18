class Solution {
public:
    vector<string> letterCombinations(string digits) {
    
 std::string mp[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
  std::vector<std::string> ans;
 if(digits.size()==0)return ans;
  allpossibleCombinations(ans,mp,"",digits,0);
  return ans;
  }


    
 void allpossibleCombinations(std::vector<std::string>&result,std::string* mp,std::string tmp,std::string digits,int index){
  if(index==digits.size()){
    result.push_back(tmp);
    return;
 }
  std::string temp = mp[digits[index]-'0'];
  for(int i=0;i<temp.size();i++){
    allpossibleCombinations(result,mp,tmp+temp[i],digits,index+1);
  }
  return ;
}
};
