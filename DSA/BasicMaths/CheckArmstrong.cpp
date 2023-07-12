//T.C = O(2n)
bool checkArmstrong(int n) {
  // Write your code here
  int original = n;
  int temp = n;
  int count = 0;

  while (temp > 0) {
    count++;
    temp /= 10;
  }
  if (count == 1)
    return true;

  int cube = 0;
  while (n > 0) {
    int digit = n % 10;
    cube += pow(digit, count);
    n /= 10;
  }
  return (cube == original);
}
