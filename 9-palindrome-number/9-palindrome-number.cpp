class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size();
        for(int i=0; i<n; i++) {
            //cout << s[0] << " " << s[n-i-1] << endl;
            if(s[i] != s[n-i-1])
                return false;
        }
        return true;
    }
};