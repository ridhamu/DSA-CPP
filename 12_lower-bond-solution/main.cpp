#include <iostream>
#include <vector>

using namespace std;


int lowerBound(vector<int> A, int Val) {

	int s = 0; 
	int e = A.size() - 1; 

	int ans = -1; 

	while(s <= e){
		int mid = (s+e)/2; 

		if(A[mid] == Val){
			ans = A[mid]; 
			return ans; 
		}else if (A[mid]> Val){
			e = mid-1; 
		}else if (A[mid]< Val){
			ans = A[mid]; 
			s = mid+1; 
		}
	}

	return ans; 
}


int main(){

	//solution goes here!

	vector<int> arr = {1, 2, 3, 4, 6};
	int key = 4; 

	// cout << arr.size() << endl;
	cout << lowerBound(arr, key) << endl;

	cin.get();
	return 0; 
}
