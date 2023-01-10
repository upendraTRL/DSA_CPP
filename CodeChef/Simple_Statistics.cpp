#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n,k;
	    cin>>n>>k;
	    long a[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	    }
	    
	    sort(a, a+ n);
	    double avg = 0;
	    for (int i = k; i < n-k; i++) {
	        avg += a[i];
	    }
	    std::cout << fixed << setprecision(6) << avg/(n-(k*2)) << std::endl;
	    
	}
	return 0;
}
