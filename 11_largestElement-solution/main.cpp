#include <iostream>
#include <vector>

using namespace std;


int printLargestElement(vector<int> arr){

	int cs = 0; 
	int largest = INT_MIN; 
	bool isNegative = true; 

	for(int val: arr){

		if(val >  0){
			isNegative = false;
		}
	}

	if(isNegative){
		cs = arr[0]; 
		largest = arr[0]; 

		for(int val: arr){
			cs = val; 
			largest = max(largest, cs);
		}
		return largest; 

	}else{
		cs = 0; 
		largest = 0; 

		for(int val: arr){
			cs += val; 
			if(cs<0){
				cs = 0; 
			}
			largest = max(largest, cs); 
		}
	}

	return largest; 
}



int main(){

	// vector<int> v = {5, 0, -1, 0, 1, 2,-1};

	vector<int> v = {-4,-3,-3,-4,-4,-2};

	cout << printLargestElement(v) << endl;

	cin.get();
	return 0;
}