//Return max subarray & its sum using Kadane's Algo.
//TC = O(n)
//SC = O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        int start=0, ansStart = -1, ansEnd = -1;
        int maxi = INT_MIN;

        for(int i=0; i<size; i++) {
            if(sum == 0) start = i;

            sum += nums[i];
            if(sum > maxi) {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }

            if(sum < 0) {
                sum = 0;
            }
        }

        for(int i=ansStart; i<ansEnd; i++) {
            cout<<nums[i]<<" ";
        }
        return maxi;
    }
};
