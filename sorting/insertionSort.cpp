#include<iostream>
using namespace std;

void insert(int arr[],int n,int element){
	int j =n-1;
	while(j>=0 && arr[j]>element){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]= element;
	// j+1 because arr[j] has either become zero or arr[j] is smaller than element so j+1 will be element
}

void insertionSort(int arr[], int n){
	for(int i = 1;i<n;i++){
		if(arr[i]<arr[i-1])
			insert(arr,i,arr[i]);
	}
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
	insertionSort(arr,n);
	cout<<"After Insertion sort: ";
	for(int x:arr){
		cout<<x<<" ";
	}

return 0;
}

