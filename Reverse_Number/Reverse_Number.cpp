#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int rev=0, i=0, fow=0;
    
    while(n != 0) {
        int digit = n%10;
        
        rev = (rev * 10) + digit;
        
        fow += digit * pow(10, i);
        
        n /= 10;
        i++;
        
    }
    
    cout<<endl;
    cout<<"Reverse = " << rev<< endl;
    cout<<"Forward = " << fow<< endl;

    return 0;
}
