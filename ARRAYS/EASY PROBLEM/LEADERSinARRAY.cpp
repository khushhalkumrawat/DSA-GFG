#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


vector<int> leaders(vector<int>& arr) {
        
        // Initialize a Array that find maximum element corresponds to each iteration
        vector<int> RightMax;

        int n = arr.size();

        // Rightmost element in array is always leader
        RightMax.push_back(arr[n-1]);
        
        int maxi = arr[n-1];
        
        // Started to find maximum from rightmost to left side

        for(int i=n-2 ; i>=0 ; i--){
            maxi = max(maxi , arr[i+1]);
            RightMax.push_back(maxi);
        }
        
        // Reverse the array
        reverse(RightMax.begin() , RightMax.end());
        
        // To store answer
        vector<int> ans;

        // Condition of Leader
        for(int i=0 ; i<n ; i++){
            if(arr[i] >= RightMax[i]){
                ans.push_back(arr[i]);
            }
        }
        return ans; 
    }