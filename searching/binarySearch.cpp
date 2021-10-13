#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
	for(int i = 0;i<n-1;i++)
		for(int j =0;j<n-1-i;j++)
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
}
int binarySearch(int arr[], int n, int element){
	int left = 0;
	int right= n-1;
	int mid;
	while(left<right){
		mid=(right - left)/2;
		if(arr[mid]==element)
			return mid;
		else{
			if(arr[mid]<element)
				left = mid;
			else
				right = mid;
		}
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
	bubblesort(arr,n);
	for(int x:arr){
		cout<<x<<" ";
	}
	int element;
	cout<<"\nEnter element to search: ";
	cin>>element;
	int index= binarySearch(arr,n,element);
	cout<<"Element found at position: "<<index;
return 0;
}

