#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter n : "; cin>>n;
    int fno = 0;
    int sno = 1;
    cout<<fno<<" "<<sno<<" ";
    for (int i = 1; i <= n; i++) {
        int next = fno + sno;
        cout<<next<<" ";
        fno = sno;
        sno = next;
    }

    return 0;
}
