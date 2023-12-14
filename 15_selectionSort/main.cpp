#include <iostream>
#include <vector>


using namespace std;


void selection_sort(int arr[], int size); 


vector<int>  selection_sort(vector<int> arrV){

	//declare variable that store the size of the vector
	int size = arrV.size();

	for(int pos = 0; pos <= (size-2); pos++){


		int min_index = pos; 

		//iterate to find index of the smallest element of the unsorted element
		for(int j = pos; j <= (size-1); j++){

			if(arrV[j] > arrV[min_index]){
				min_index = j; 
			}
		}

		//swap the current pos element with the arr[min_index] element(swap the smallest element to the left)
		swap(arrV[pos], arrV[min_index]); 
	}

	return arrV; 
}

int main(){

	int arr[] = {-2, 1, -3, 4, -5, 6, -7, 8, 9, -10, 12};
	int n = sizeof(arr)/sizeof(int);

	vector<int> arrV = {-2, 1, -3, 4, -5, 6, -7, 8, 9, -10, 12};

	arrV = selection_sort(arrV);
	selection_sort(arr, n);

	cout << "selection sort on array: " << endl;
	for(auto x: arr){
		cout << x << " "; 
	}

	cout << "\nselection sort on vector: " << endl;
	for(auto v: arr){
		cout << v << " ";
	}

	return 0; 
}


void selection_sort(int arr[], int size){

	//iteration from 0 until (size-2)
	for(int i = 0; i <= (size-2); i++){

		int min_index = i; 

		//iteration to find index of the smallest element on the unsorted part of the array
		for(int j = i; j <= (size-1); j++){
			if(arr[j] < arr[min_index]){
				min_index = j; 
			}
		}

		//swap the current element with arr[min_index]; 
		swap(arr[i], arr[min_index]); 
	}

}
