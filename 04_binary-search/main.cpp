#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){

	int s = 0; 
	int e = size - 1; 

	while(s <= e){
		int mid = (s+e)/2; 

		if(arr[mid] == key){
			return mid;
		}else if(arr[mid] > key){
			e = mid - 1; 
		}else{
			s = mid + 1; 
		}
	}
	return -1; 
}

int main(){

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	int n = sizeof(arr)/sizeof(int); 

	int key;
	cin >> key;

	int check = binarySearch(arr, n, key);

	if(check != -1){
		cout << "angka ditemukan di posisi: "  << check << endl;
	}else {
		cout << "angka tidak ditemukan" << endl;
	}

	cin.get();
	return 0;
}
