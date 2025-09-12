#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<int, int> freq; 

        for (int x : arr) {
            freq[x]++;  
        }

        int distinct = freq.size();

        if(distinct == 1)
        {
              cout << "YES" << endl;
        }
        else if(distinct >= 3)
        {
             cout << "NO" << endl;
        }
        else {
        int oddSlots = (n + 1) / 2;
        int evenSlots = n / 2;

        auto it = freq.begin();
        int count1 = it->second;
        it++;
        int count2 = it->second;

    
        if ((count1 == oddSlots && count2 == evenSlots) ||
            (count2 == oddSlots && count1 == evenSlots)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
}

    }
    return 0;
}