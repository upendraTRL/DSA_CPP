int findDuplicate(int *arr, int n) {
  int ans = 0, count_zero = 0;

  for (int i = 0; i < n; i++) {
    if(arr[i] == 0){
      count_zero++;
      if(count_zero == 2){
        return 0;
      }
      continue;
    }
    ans = ans ^ arr[i];
  }

  for (int i = 1; i < n-count_zero; i++) {
    ans = ans ^ i;
  }
  return ans;
}
