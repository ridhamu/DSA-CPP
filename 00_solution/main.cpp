#include <iostream>
#include <vector>

using namespace std;

vector<int> selection_sort(vector<int> arrV){

	int size  = arrV.size();

	for(int pos = 0; pos <= (size - 2); pos++){

		int min_index = pos; 
		for(int j = pos; j <= (size - 1); j++){

			if(arrV[j] < arrV[min_index]){
				min_index = j; 
			}
		}

		swap(arrV[pos], arrV[min_index]); 
	}

	return arrV; 
}


int main(){

	vector<int> arr = {-3, 12, 14 , 8, 7, 4, 5, 7,0, -7}; 

	arr = selection_sort(arr); 

	for(auto x: arr){
		cout << x << " "; 
	}


	return 0;
}
