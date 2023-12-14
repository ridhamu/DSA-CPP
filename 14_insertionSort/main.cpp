#include <iostream>
#include <vector>


using namespace std;

vector<int> insertion_sort(vector<int> arrV);
void insertion_sort(int arr[], int size);  

int main(){

	int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3}; 
	int n = sizeof(arr)/sizeof(int); 

	vector<int> arrV = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
 

	arrV = insertion_sort(arrV);  
	insertion_sort(arr, n); 


	cout << "insertion search on vector: " << endl;
	for(auto x: arrV){
		cout << x << " "; 
	}

	cout << "\ninsertion search on array: " << endl;
	for(auto x: arr){
		cout << x << " "; 
	}

	return 0; 
}


vector<int> insertion_sort(vector<int> arrV){

	int size = arrV.size();

	for(int i = 1; i <= size-1; i++){

		int currentElement = arrV[i]; 
		int prevIndex = i-1;

		while(prevIndex >= 0 and arrV[prevIndex] > currentElement){
			arrV[prevIndex+1] = arrV[prevIndex]; 
			prevIndex = prevIndex - 1; 
		}

		arrV[prevIndex+1] = currentElement; 
	}
	return arrV; 
}

void insertion_sort(int arr[], int size){

	for(int i = 1; i <= size-1; i++){

		int currentElement = arr[i]; 
		int prevIndex = i-1; 

		while(prevIndex >= 0 and arr[prevIndex] > currentElement){
			arr[prevIndex + 1] = arr[prevIndex]; 
			prevIndex = prevIndex - 1; 
		}

		arr[prevIndex + 1] = currentElement; 
	}
}
















