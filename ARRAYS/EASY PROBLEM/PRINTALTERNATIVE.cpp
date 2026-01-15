#include<bits/stdc++.h>

using namespace std;

vector<int> PrintAlternative(vector<int> arr){
    
    // Find size of array
    int n = arr.size();
    
    // Initialize an dynamic array
    vector<int> ans;

    // Skip the just next iteration to print alternative
    for(int i = 0 ; i < n ; i = i+2){
            ans.push_back(arr[i]);
    }

    return ans;
}
