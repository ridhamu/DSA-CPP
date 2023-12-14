#include <iostream>
#include <vector>


using namespace std;


void buble_sort(int arr[], int n){


	for(int times = 1; times<=n-1; times++){

		for(int j=0; j<=(n-1-times); j++){

			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]); 
			}
		}
	}

}

vector<int> buble_sortV(vector<int> arrV){

	int n = arrV.size();

	for(int times = 1; times<=n-1; times++){

		for(int j=0; j<=(n-1-times); j++){

			if(arrV[j] > arrV[j+1]){
				swap(arrV[j], arrV[j+1]); 
			}
		}
	}
	return arrV; 
}

int main(){

	int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3}; 

	vector<int> arrV = {-2, 3, 4, -1, 5, -12, 6, 1, 3}; 

	int n = sizeof(arr)/sizeof(int); 

	arrV = buble_sortV(arrV); 
	buble_sort(arr, n);

	cout << "array buble_sort: "; 
	for(auto x: arr){
		cout << x << ", "; 
	}

	cout << endl;
	cout << "Vector buble_sort: ";
	for(auto x: arrV){
		cout << x << ", "; 
	}

	return 0; 
}
