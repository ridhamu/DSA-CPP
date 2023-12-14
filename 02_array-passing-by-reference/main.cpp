#include <iostream>

using namespace std;


void printArray(int arr[], int size){

	cout << "in printArray() : " << sizeof(arr) << endl;

	int n = sizeof(arr)/sizeof(int); //error karena n = 8 / 4 -> 8 disini adalah size dari variable reference yang isinya address memory

	arr[0] = 100;

	for(int i = 0; i<size; i++){
		cout << arr[i] << " ,";
	}

	cout << endl;
}

int main(){

	int arr[] = {1,2,3,4,5,6}; // ukuran dari int = 4 byte, jadi ukurang dari array adalah 4 x 6 = 24 byte


	int n = sizeof(arr)/ sizeof(int); 

	cout << "in main() : " << sizeof(arr) << endl;

	printArray(arr, n);

	//print the array value
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ,";
	}
	cout << endl;



	return 0;
}
