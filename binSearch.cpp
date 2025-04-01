#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <fstream>

using namespace std;


void binarySearch(int target , int arr [], const int numSize) { /// Initial Function
  int left = 0; ///Initialize variable left to 0
  int right = numSize-1; /// initialize variable right to be equal to numSize.
  
  /// BINARY SEARCH ///
  /// Here, we implment a binary search to find a user given value in a large array or random integers. When binary searching, we use a key variable, for our middle value, and essentially slice our array in half. Then we chekc to see if the number in question is greater or smaller than the mid value, depending, we slice the remaining array values in half, and repeat the same process of subdividing till the value is located.
  while(left <= right) { ///Initial while loop, this loop iterates over our array of random integers and  
    int m; ///initialize our mid value
    m = (left + right)/2; /// set mid to equal left + right divided by two, so it subdivides.
    if (arr[m] < target) { ///Check if target value is greater than index.
      left = m+1; /// If so, set the left value to the mid + 1 to create a new search space.
      cout << target << " is greater than "<< arr[m] << " from randintArray"<<numSize << endl; ///Notify user of where in the process the search is at.
      cout << '\n';
    } else { /// Next case.
      if (arr[m] > target) { /// Check if taget value is less than current index. 
        right = m-1; /// If so, set right value = to mid value +1, to refine search space.
        cout << target << " is less than "<< arr[m] << " from randintArray "<< numSize << endl; ///Notify user of where in the process the search is at.
        cout << '\n';
      } else { /// Next case
        cout << "Your number: " << target << " Has been found at index: " << arr[m] << endl; /// if this case is reached, notify the user that the value has been found.
        return;
      }
    }
  }
  cout << target << "[NUMBER NOT IN ARRAY]" << endl;  ///Else, notify the user that the value is not in the array.
}
