class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for (int i=0;i<s.size();i++){
            if (((int)s[i]>=97 && (int)s[i]<=122) || ((int)s[i]>=65 && (int)s[i]<=90)){
                ans.push_back(s[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            
            ans[i]=tolower(ans[i]);
            // cout<<ans[i];
        }
        
        
        int i=0;
        int j = ans.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};