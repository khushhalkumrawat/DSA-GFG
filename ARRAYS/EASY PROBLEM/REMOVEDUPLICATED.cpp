#include<bits/stdc++.h>

using namespace std;

// Time Complexity : O(n)
// We iterating over each value and compare to it's next one 
// if find duplicates skip the iteration else insert it in array
// index j : ensures that element is unique

// Space Complexity : O(1)
// The solution is in-place solution


vector<int> removeDuplicates(vector<int> &arr) {

       // Given array is Sorted:

       // Let's initilaze a index where we insert unique elements:
       int j = 0;
        
        for(int i=1 ; i<arr.size() ; i++){

           // Check is elements are unique 
              if(arr[i] != arr[j]){
                  j++;
                  arr[j] = arr[i];
              }
          // If elements are duplicate move ahead

        }
       
     // Now size is reduced because of duplicates elements   
     arr.resize(j+1);
     return arr;

  }