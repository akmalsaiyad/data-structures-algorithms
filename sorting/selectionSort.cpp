#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
	int min_ind;
	for(int i =0;i<n-1;i++){
		min_ind = i;
		for(int j = i+1;j<n;j++){
			if (arr[min_ind]>arr[j]){
				min_ind = j;
			}
		}
		swap(arr[i],arr[min_ind]);
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
	selectionSort(arr,n);
	cout<<"After Selection sort: ";
	for(int x:arr){
		cout<<x<<" ";
	}

return 0;
}

