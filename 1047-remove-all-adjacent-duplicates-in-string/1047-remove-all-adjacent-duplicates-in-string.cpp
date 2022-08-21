class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        while(i < s.length()-1 && s.length() != 0) {
            if(s[0] == s[1]){
                s.erase(s.begin(), s.begin()+2);
            }
            else if(s[i] == s[i+1] && i != 0) {
                s.erase(s.begin()+i, s.begin()+i+2);
                i--;
            }
            else
                i++;
        }
        return s;
    }
};