#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--) {
	    int n,w;
	    cin>>n>>w;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	    }
	    
	    sort(a, a+n, greater<int>());   //Coverting array to Decending order
	    int count=0, sal=0;

	    for (int i = 0; i < n; i++) {
	        if(sal<w){
	            sal += a[i];
	            count++;
	        }
	    }
	    cout<<n-count<<endl;
	}
	
	return 0;
}
