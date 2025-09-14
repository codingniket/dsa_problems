#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int remaning_team = 0;
        for(int i = 0; i < n-1; i++)
        {
            cin >> arr[i];
            remaning_team += arr[i];
        }
        remaning_team = -remaning_team;
        cout << remaning_team << endl;
    }
    return 0;
}