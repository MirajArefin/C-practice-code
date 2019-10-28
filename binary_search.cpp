#include <iostream>
using namespace std;

int binary_search(int num, int* arr, int size);
int main(){
	int arr[] = {1,2,3,4,5,6};
	cout << endl << "result : " << binary_search(4, arr, 6);

}

int binary_search(int num, int* arr, int size){
	int low = 0, high = size-1;
	int mid;
	while(low <= high){
		mid = (high+low)/2;
		if(num > arr[mid]){
			low = mid+1;
		}
		else if(num < arr[mid]){
			high = mid-1;
		}
		else if(arr[mid] == num){
			return 1;
		}
	}
	return 0;
}
