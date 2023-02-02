class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size = arr.size();
        vector<bool> ans(size, false);
        vector<int> uniQ;
        int uniqueCount = 0;
        for (int i = 0; i < size; i++)
        {
            if (ans[i] == true)
            {
                uniqueCount++;
                continue;
            }

            int count = 1;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    ans[j] = true;
                    count++;
                }
            }
            uniQ.push_back(count);
        }
        int res = 0;
        for (int i = 0; i < uniqueCount; i++)
        {
            res = res ^ uniQ[i];
        }
        if (res == 0)
        {
            return false;
        }
        return true;
    }
};
