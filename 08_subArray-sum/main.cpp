#include <iostream>

using namespace std;

//brute force approach
//time complexity = N(0^3)
int printSubArray1(int arr[], int size){

	int largest_sum = 0; 

	for(int i = 0; i<size; i++){
		for(int j=i; j<size; j++){

			int curretn_sum = 0;

			for(int k=i; k<j; k++){
				curretn_sum += arr[k];
			}
			largest_sum = max(curretn_sum, largest_sum);
		}
	}

	return largest_sum; 
}

//prefix sum approach sum
//time complexity = N(0^2)
int printSubArray2(int arr[], int size){

	int largest_sum = 0; 

	//creating prefixsum array
	int prefix[100] = {0}; //using size of 100 for array becoz it suuposed to be dynamic array but not aplicable yet
	prefix[0] = arr[0]; 

	//calculating prefix sum array
	for(int i=1; i<size; i++){
		prefix[i] = prefix[i-1] + arr[i];
	}

	for(int i = 0; i<size; i++){
		for(int j=i; j<size; j++){

			int curretn_sum = (i>0) ? prefix[j] - prefix[i-1] : prefix[j];

			largest_sum = max(curretn_sum, largest_sum);
		}
	}

	return largest_sum;  
}

int main(){

	int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
	int n = sizeof(arr)/sizeof(int);

	//print sub-array
	// int largest = printSubArray(arr, n);

	cout << "using brute force approach: " << printSubArray1(arr, n) << endl;
	cout << " using prefix sum approach: "<< printSubArray2(arr, n) << endl;


	cin.get();
	return 0;
}
