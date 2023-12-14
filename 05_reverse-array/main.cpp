#include <iostream>

using namespace std;


void reverseArray(int arr[], int size){

	int s = 0;
	int e = size-1; 

	while(s<e){
		swap(arr[s], arr[e]); 
		s = s+1;
		e = e-1; 
	}
}

int main(){


	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; 
	int n = sizeof(arr)/sizeof(int);

	for(int i = 0; i<n; i++){
		if(i == n-1){
			cout << arr[i] << endl;
			break;
		}
		cout << arr[i] << ", "; 
	}

	//reverse array
	reverseArray(arr, n);

	for(int i = 0; i<n; i++){
		if(i == n-1){
			cout << arr[i] << endl;
			break;
		}
		cout << arr[i] << ", "; 
	}

	cin.get();
	return 0;
}
