// #include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Just want to try this Question in this approch .
// I know Tc is NlogN .
// if you think any edge cage fais you can tell me 

int main () {
    vector<int> arr;
    int n ;
    cin >> n;
    if ( n < 3) {
        cout << "Qustion condition didn't meet";
    }
    int count = 0;
    for (int i = 0 ; i < n; i++) {
        int x ;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 1 ; i < n ; i = i+2) {
        if (arr[i] == arr[i-1]) {
            continue;
        }
        else {
            cout << arr[i-1];
            count = 1;
            break;

        }
    }
    if (count == 0) {
        cout << arr[n-1];
    } 
}