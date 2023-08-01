//Using Math
//T.C - O(1), S.C - O(1)
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }
};

//Using Recursion
//T.C - O(logn), S.C - O(logn)
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) {
            return false;
        }
        if(n == 1) {
            return true;
        }

        return n%3 == 0 && isPowerOfThree(n/3);
    }
};
