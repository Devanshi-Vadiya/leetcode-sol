// Last updated: 4/24/2026, 5:06:24 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1){
            return false;
        }
        while(n!=1){
            while(n%2==1){
                return false;
            }
            n=n/2;

        }
        return true;
    }
};