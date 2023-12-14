#include <iostream>

using namespace std;

int printSubArray(int arr[],int size){
	int cs = 0; 
	int largest = 0; 

	for(int i=0; i<size; i++){
		cs = cs + arr[i];

		if(cs<0){
			cs = 0; 
		}

		largest = max(largest, cs); 
	}

	return largest;
}

int main(){

	int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
	int n = sizeof(arr)/sizeof(int);


	cout << "largest sum subArray using kadane's: " << printSubArray(arr, n) << endl;

	cin.get();
	return 0;
}
