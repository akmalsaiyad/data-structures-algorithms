#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int element){
	for(int i =0;i<size;i++){
		if(arr[i] == element)return i;
	}
	return -1;
}

int main(){
	int n;
	cout<<"Enter Size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elemets of array: ";
	for(int i =0;i<n;i++){
	cin>>arr[i];
	}
	cout<<"Enter element to search: ";
	int element;
	cin>>element;
	int index = linearSearch(arr,n,element);
	cout<<"Element found at position : "<<index;

return 0;
}

