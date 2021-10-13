#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
	for(int i =0;i<n-1;i++)
		for(int j = 0;j<n-i-1;j++)
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
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
	bubbleSort(arr,n);
	cout<<"Elements after sorting: ";
	for(int x:arr){
		cout<<x<<" ";
	}
return 0;
}

