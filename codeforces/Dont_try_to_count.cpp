#include<bits/stdc++.h>
using namespace std;

bool check(string s, string x)
{
    // If x is smaller than s, s cannot be a substring of x
    if (x.size() < s.size())
    {
        return false;
    }
    // Loop through x to find if s is a substring
    for (int i = 0; i < x.size() - s.size() + 1; i++) // n - m + 1
    {
        // Check if the substring of x starting at i with length of s is equal to s
        if (x.substr(i, s.size()) == s) // m
        {
            return true; // s is a substring of x
        }
    }
    return false; // s is not a substring of x
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;

        string x0 = x; //  0 operations
        string x1 = x0 + x0; // 1 operation
        string x2 = x1 + x1; // 2 operations
        string x3 = x2 + x2; // 3 operations
        string x4 = x3 + x3; // 4 operations
        string x5 = x4 + x4; // 5 operations

        long long ans = -1; // Initialize answer as -1 (not possible)
        // Check if s is a substring of x after 0 to 5 operations
        if (check(s, x0))
            ans = 0;
        else if (check(s, x1))
            ans = 1;
        else if (check(s, x2))
            ans = 2;
        else if (check(s, x3))
            ans = 3;
        else if (check(s, x4))
            ans = 4;
        else if (check(s, x5))
            ans = 5;
        cout << ans << endl; // Output the minimum number of operations
    }
    return 0;
}