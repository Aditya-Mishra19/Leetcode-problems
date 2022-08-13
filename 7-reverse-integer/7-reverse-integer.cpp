class Solution {
public:
    int reverse(int x) {
        int orginalNumber = x;
        int rev = 0, temp = 0;
        while(abs(orginalNumber) > 0){
            if( (rev > INT_MAX/10) || (rev < INT_MIN/10) ){
                return 0;
            }
            temp = orginalNumber % 10;
            
            rev = (rev*10) + temp;
            
            orginalNumber /= 10;
        }
        return rev;
    }
};