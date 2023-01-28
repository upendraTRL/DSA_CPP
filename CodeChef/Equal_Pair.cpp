#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	    }
	    
	    int m=0;
	    for (int i = 0; i < n; i++) {
	        int freq = 0;
	        for (int j = 0; j < n; j++) {
	            if(a[i] == a[j]){
	                freq++;
	            }
	            if(freq >= m){
	                m = freq;
	            }
	        }
	    }
	    std::cout << n-m << std::endl;
	}
	return 0;
}
