// binary search algorithm
// 1. get the array of number and the number that need to be search
// 2. sort it from small to largest
// 3. find the middle index of the array
// 4. check if the number is at the middle index or not
// 5. if not than check if the number is bigger than the middle number of the sorted array or not
// 6. than do the binary search
// 👉 Time Complexity: O(log n)

#include <iostream>
using namespace std;

int main(){
  cout << "Enter the limit of the array :: ";
  int limit;
  int nums[limit];
  cin >> limit;
  ccout << "Enter "<<limit<< " integer ;"<<endl;
  for(int i=0;i<limit;i++){
    cin >> nums[i];
  }
	return 0;
}
