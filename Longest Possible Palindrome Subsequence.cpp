#include<bits/stdc++.h>
using namespace std;


int max (int x, int y) { return (x > y)? x : y; }


int lps(char *seq, int i, int j)
{

if (i == j) //has only one character
    return 1;

if (seq[i] == seq[j] && i + 1 == j) //has only two characters
    return 2;

if (seq[i] == seq[j])
    return lps (seq, i+1, j-1) + 2;


return max( lps(seq, i, j-1), lps(seq, i+1, j) );
}


int main()
{
    char seq[] = "GEEKSFORGEEKS";
    int n = strlen(seq);
    cout << "The length of the LPS is "
         << lps(seq, 0, n-1);
    return 0;
}
