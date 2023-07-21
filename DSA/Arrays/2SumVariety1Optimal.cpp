//T.C - O(n) + O(n logn) for sorting
//S.C - O(1) or O(n) for considering the sorting
//Variety 1 - Yes/No is the output

string read(int n, vector<int> book, int target)
{
    sort(book.begin(), book.end());
    int i = 0;
    int j = n-1;
    
    while(i < j){
        if((book[i]+book[j]) == target) {
            return "YES";
        }

        if((book[i]+book[j]) < target){
            i++;
        }else{
            j--;
        }
    }
    return "NO";
}
