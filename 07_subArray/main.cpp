#include <iostream>

using namespace std;

void printSubArray(int arr[], int size){

	for(int i = 0; i<size; i++){
		for(int j=i; j<size; j++){
			int sum = 0;

			for(int k=i; k<j; k++){
				cout << arr[k] << ", ";
				sum = sum + arr[k]; 
			}


			cout << " sum = " << sum << endl;
		}
	}
}

//print the sum of each subarray and find out the largest sum

int main(){

	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int n = sizeof(arr)/sizeof(int);

	//print sub-array
	printSubArray(arr, n);

	cin.get();
	return 0;
}
