#include<iostream>
using namespace std;
int main(){
	int n,x;
	
	cout<<"enter the size of array";
	cin>>n;
	
	int arr[n];
	cout<<"enter the element of array";
	
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
//	int pos;
//    cout << "Enter the index location for deletion (0 to " << n << "): ";
//    cin >> pos;
//
//    for(int i = pos; i < n-1; i++){
//    	arr[i] = arr[i+1];
//	}
//orr 
    int pos;

    cout << "Enter the  location for deletion (1 to " << n << "): ";
    cin >> pos;

    for(int i = pos-1 ; i < n-1 ; i++){
    	arr[i] = arr[i+1];
	}
	n--;
	
	cout<<"array element are";
	
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i];
	}
}
