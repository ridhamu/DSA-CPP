#include <iostream>

using namespace std;

int main(){

	//inisialisasi tipe data dan ukuran array
	int nilai[100] = {0}; 

	int n; 

	cout<<"Masukkan jumlah murid: "; 
	cin >> n; 

	//initialize the first value of array [0]
	nilai[0] = -1; 

	//loop to take input from 0ith till n-1 array index

	for(int i = 1; i<=n; i++){
		cin >> nilai[i]; 
		nilai[i] = nilai[i] * 2; 
	}


	//loop to ouput the value inside array
	for(int i = 0; i<100; i++){
		cout << nilai[i] << " ,"; 
	}

	cout << endl;

	return 0;
}
