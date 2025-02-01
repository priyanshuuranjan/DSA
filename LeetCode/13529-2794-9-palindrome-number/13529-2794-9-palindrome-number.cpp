class Solution
{
    public:
        bool isPalindrome(int x)
        {
            if (x < 0)
                return false;

            int ans = 0;
            int rem;
            int num = x;
            while (num)
            {
                rem = num % 10;
                num = num / 10;
                if (ans > INT_MAX / 10)
                    return 0;
                ans = ans *10 + rem;
            }
            if (ans == x)
                return true;
            else
                return false;
        }
};

// other way hard 
// class Solution {
// public:
//     bool isPalindrome(int n) {
//        	// Special case: negative numbers are not palindromes
//         if (n < 0)
//             return false;

//         int duplicate = n;
//         long long revNum = 0;
//         while (n != 0) {
//             int lastNum = n % 10;
//             revNum = revNum *10 + lastNum;
//             n = n / 10;
//         }
//         return duplicate == revNum;
//     }
// };