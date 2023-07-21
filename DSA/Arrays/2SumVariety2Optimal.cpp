//TC - O(n logn) for ordered map
//     O(n^2) - W.C, O(n) - B.C/A.C
//SC - O(n) for map
//Variety2 - Indexs is the output

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();
        
        for(int i=0; i<n; i++) {
            int num = nums[i];
            int moreN = target - num;

            if(mpp.find(moreN) != mpp.end()) {
                return {mpp[moreN], i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};
