//T.C - O(stringLength)
#include <bits/stdc++.h>
using namespace std; 

class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        int stringLength = s.length();
        string output = "z";
        output = s[0];
        int j = 0;
        
        for(int i = 1; i < stringLength; i++){
            if(s[i] != output[j]){
                j++;
                output += s[i];
            }
        }
        return output;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 
