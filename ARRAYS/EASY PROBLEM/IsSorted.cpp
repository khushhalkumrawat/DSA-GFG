#include<bits/stdc++.h>

using namespace std;

bool IsSorted(vector<int> arr){

    int n = arr.size();
    
    // Here we are check for is it sorted in non-decreasing order
    for ( int i = 0 ; i < n-1 ; i++){

        if(arr[i] > arr[i+1]){
            return false;
        }

    }
    return true;
}