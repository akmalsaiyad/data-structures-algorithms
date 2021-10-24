#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
	for(int i = 0;i<n-1;i++)
		for(int j =0;j<n-1-i;j++)
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
}

//iterative
int binarySearch(int arr[], int n, int element){
	int left = 0;
	int right= n-1;
	int mid;
	while(left<=right){
		mid=(right + left)/2;
		if(arr[mid]==element)
			return mid;
		else if(arr[left]==element){
			return left;
		}
		else if(arr[right]==element){
			return right;
		}
		else{
			if(arr[mid]<element)
				left = mid+1;
			else
				right = mid-1;
		}
	}
	
	return -1;
}

//recursive
int recBinarySearch(int arr[],int left,int right,int element){
	int mid = (left + right)/2;
	if (arr[mid] == element)
		return mid;
	else if(left>right)
		return -1;
	else{
		if(arr[mid]<element)
			return recBinarySearch(arr,mid+1,right,element);
	else
		return recBinarySearch(arr,left,mid-1,element);
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
	bubblesort(arr,n);
	for(int x:arr){
		cout<<x<<" ";
	}
	int element;
	cout<<"\nEnter element to search: ";
	cin>>element;
	int index= binarySearch(arr,n,element);
	cout<<"Iteratively Element found at position: "<<index;
	 index= recBinarySearch(arr,0,n-1,element);
	cout<<"\nRecursively Element found at position: "<<index;
return 0;
}

