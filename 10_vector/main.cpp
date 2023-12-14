#include <iostream>
#include <vector>

using namespace std;


int main(){

	//creating vector
	//vector<int> arr = {1,2,3,4}; //only work on c++11 version

	//initialization vector using fill constructor 
	//vector<int> arr(number-of-element, value); 
	vector<int> arr(10, 7);

	//adding element to a vector
	//push_back() gonna add the element at the end of the list 
	arr.push_back(69); 

	//remove the last element of the vector
	//pop_back() gonna remove the last element of the vector
	arr.pop_back(); 

	

	//display the elemet of the vector
	for(int i=0; i<arr.size(); i++){
		cout << arr[i] << endl;
	}

	//printing the size of vector [display number of element]
	// using syntax: v.size();
	cout << "total element: " << arr.size() << endl; 

	//printing the capacity of vector
	cout << "capacity of vector: " << arr.capacity() << endl;

	cin.get();
	return 0; 
}
