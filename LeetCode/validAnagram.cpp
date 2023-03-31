class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int n2 = t.size();

        if(n != n2){
            return false;
        }

        vector<int> freq(26,0);

        for(int i=0;i<n;i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i=0;i<freq.size();i++){
            if(freq[i] != 0){
                return false;
            }
        }
    return true;
    }
};
