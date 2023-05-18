class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int n2 = t.size();

        if(n != n2){
            return false;
        }

        vector<int> freq(26,0); 
        //To check 's' & 't' are anagram or not, we maintain a freq vector of size
        //26(alphabet) and set to '0' initially.
        //Eventually, all values from freq vector should be '0' to consider
        //'s' & 't' to be an Anagram.

        for(int i=0;i<n;i++){
            //The logic is to check the count of letters from both strings to be
            //equal, by adding(from 'S') & subtracting(from 'T') so that eventually
            //the value in freq will '0' if equal.

            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i=0;i<freq.size();i++){
            // cout<<freq[i]<<endl;
            if(freq[i] != 0){
                return false;
            }
        }
    return true;
    }
};
