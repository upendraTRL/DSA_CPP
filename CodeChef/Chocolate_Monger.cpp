#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--) {
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	    }
	    
	    set<int> s(a, a+n); //Set is a container which contains unique values.
	    int size = s.size();
	    
	    std::cout << min(size, n-x) << std::endl;
	}
	
	return 0;
}
