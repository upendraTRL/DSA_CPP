#include <iostream>

using namespace std;

int sumOfArray(int arr[], int size) {
    if(size <= 0) {
        return 0;
    }
    
    return (sumOfArray(arr, size-1) + arr[size-1]);
}

int main()
{
    int arr[4] = {1, 2, 3};
    
    cout<<"Sum = "<<sumOfArray(arr, 3);
    
    

    return 0;
}
