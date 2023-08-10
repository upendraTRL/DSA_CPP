//Using Moore's Voting Algo
//TC - O(n) + O(n)
//SC - O(1)
int majorityElement(vector<int> v) {
	// Write your code here
	int cnt = 0;
	int ele;

	for(int i=0; i<v.size(); i++) {
		if(cnt == 0) {
			cnt = 1;
			ele = v[i];
		}
		else if(v[i] == ele) {
			cnt++;
		}
		else {
			cnt--;
		}
	} //O(n)
	
	int cnt1 = 0;
	for(int i=0; i<v.size(); i++) {
		if(v[i] == ele) cnt1++;
	} //O(n)

	if(cnt1 > v.size()/2) return ele;

	return -1;
}
