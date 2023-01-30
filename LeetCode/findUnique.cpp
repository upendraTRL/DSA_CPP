int findUnique(int *arr, int size)
{
    int ans = 0;

    for(int i = 0; i < size; i++) {
        ans = ans^arr[i];   //Used XOR operation, which will either return '0 for same element' 
                            //or 'that element when XORed with 0 
    }
    return ans;
}
