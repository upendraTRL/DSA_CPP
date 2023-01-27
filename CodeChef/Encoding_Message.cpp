#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    
	    int n, tem = 0;
	    string mod1;
	    cin>>n>>mod1;

	   for (int i = 0; i < n - 1 ; i += 2) {
	       tem = mod1[i];
	       mod1[i] = mod1[i+1];
	       mod1[i+1] = tem;
	   }
	   
	   for (int i = 0; i < n; i++) {
	       int temp = 0;
	       if(int(mod1[i]) <= 109 ){
	           
	           temp = int(mod1[i]) - 97;
	           mod1[i] = char(122 - temp);
	           
	       }else if(int(mod1[i]) >= 110 ){
	           
	           temp = 122 - int(mod1[i]);
	           mod1[i] = char(97 + temp);
	           
	       }
	   }
	   cout << mod1 << endl;
	   
	}
	return 0;
}
