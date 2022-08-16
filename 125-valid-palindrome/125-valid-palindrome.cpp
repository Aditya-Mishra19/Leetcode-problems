class Solution {
private:
    char toLowerCase(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= 0 && ch <= 9))
            return ch;
        else{
            ch = ch - 'A' + 'a';
            return ch;
        }
    }
    bool isValid(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') )
            return true;
        return false;
    }
    
    bool checkPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start <= end) {
            if(s[start] != s[end]) return false;
            else{
                start++;
                end--;
            }
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0; i<s.length(); i++) {
            if(isValid(s[i]))
                temp.push_back(s[i]);
        }
        for(int i=0; i<temp.length(); i++) {
                temp[i] = toLowerCase(temp[i]);
        }
        return checkPalindrome(temp);
    }
};