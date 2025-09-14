#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n];
        bool In_array = false;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == k)
            {
                In_array = true;
            }
        }
        if(In_array)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        
    }
    return 0;
}