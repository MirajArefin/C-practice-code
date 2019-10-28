//Author : Miraj Arefin

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "How many numbers you want to check?" << endl;
    cin >> n;
    int arr[n];
    cout << "Give the numbers : " ;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;
    for(int j = 0; j < n; j++){
    for(int i = 0; i < n-1; i++){
        int temp = arr[i];
        if(arr[i] > arr[i+1]){
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    }
    cout << "Sorted numbers are : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}
