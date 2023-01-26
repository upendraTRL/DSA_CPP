#include <iostream>

using namespace std;

int factorial(int n){
    // This function returns the factorial of 'n'
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
    
}

int nCr(int n, int r){
    // This function returns the nCr value of 'n, r'
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    return num/denom;
}

int main()      
{
    // Calls the nCr function    
    int n,r;
    std::cin >> n >> r;
    cout << nCr(n,r) << endl;

    return 0;
}
