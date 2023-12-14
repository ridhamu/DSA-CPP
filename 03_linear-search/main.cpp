#include <iostream>

using namespace std;



int linearSearch(int arr[], int size, int key){

	for(int i=0; i<size; i++){
		if(arr[i] == key){
			return i;
		}
	}

	return -1;
}

int main(){



	int arr[] = {8 , 9, 4, 7, 4, 2, 9, 10, 12, 13};

	int n = sizeof(arr)/sizeof(int);

	int key;

	cout << "Masukkan angka yang ingin di cek pada list: ";
	cin >> key;

	int check = linearSearch(arr, n, key);

	if(check != -1){
		cout << "angka ditemukan pada posisi-" << check << " dalam array"; 
	}else{
		cout << "angka tidak ditemukan dalam array" << endl;
	}

	cout << endl;
	cin.get();
	return 0;
}
