#include<iostream>
using namespace std;
int main(){
	int n,x;
	
	cout<<"enter the size of array";
	cin>>n;
	
	int arr[n];
	cout<<"enter the el of array";
	
	
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	
    for(int i = 0 ; i < n ; i++){
    	arr[i] = arr[i+1];
	}
	n--;
	
	cout<<"array el are";
	
	for(int i = 0; i < n ; i++){
		cout<<arr[i];
	}
}
