class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target= 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
            int j = i+1;
            int k = n -1;

            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }else if(sum < target){
                    j++;
                }else{
                    k--;
                }
            }
        }
        for(auto trips : s){
            ans.push_back(trips);
        }
        return ans;

    }
};
