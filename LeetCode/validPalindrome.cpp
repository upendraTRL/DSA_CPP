class Solution {
public:
    char toLowerCase(char ch){
        if(ch >= 'a' && ch <= 'z'  || ch >= '0' && ch <= '9'){
            return ch;
        }else{
            if(ch >= 'A' && ch <= 'Z'){
                char temp = ch - 'A' + 'a';
                return temp;
            }else{
                // cout<<"S";
                return '$';
            }
        }
    }

    bool checkS(char ch){
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
            return false;
        }else{
            return true;
        }
    }

    bool isPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int e = n-1;

        while(st<e){
            if(checkS(s[st])){
                st++;
                continue;
            }
            if(checkS(s[e])){
                e--;
                continue;
            }

            if(toLowerCase(s[st++]) != toLowerCase(s[e--])){
                return false;
            }
        }        
        return true;
    }
};
