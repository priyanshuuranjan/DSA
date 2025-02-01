class Solution {
public:
    bool isPowerOfTwo(int num) {
        if (num < 1)
            return false; 
        while (num != 1) {
            if (num % 2 == 1) {
                return false;
            }
            num = num / 2; // Move this line outside the if block
        }
        return true; 
    }
};
