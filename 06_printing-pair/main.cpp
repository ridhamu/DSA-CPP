#include <iostream>

using namespace std;


void printPair(int arr[], int size){

	for(int i=0; i<size; i++){
		int x = arr[i]; 

		for(int j=i+1; j<size; j++){
			int y = arr[j]; 
			cout << x << "," << y << endl;
		}
		cout << endl;
	}

}

int main(){

	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(int);

	//print pairs
	printPair(arr, n);

	cin.get();
	return 0;
}
