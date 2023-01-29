#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int m = n*2;
	    int a[m];
	    for (int i = 0; i < m; i++) {
	        cin>>a[i];
	    }
	    
	    vector<bool> visited(m, false);
	    
	    for (int i = 0; i < m; i++) {
	        //std::cout << a[i] << std::endl;
	        
	        if (visited[i] == true)
                continue;
            int count = 1;
            for (int j = i + 1; j < m; j++) {
                if (a[i] == a[j]) {
                    visited[j] = true;
                    count++;
                }
            }
            cout << a[i] << " " << count << endl;
        }
	}
	return 0;
}
