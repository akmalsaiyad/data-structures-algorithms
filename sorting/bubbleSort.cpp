#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
	bool is_swap=false;
	for(int i =0;i<n-1;i++)
	{
		is_swap =false;
			for(int j = 0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					swap(arr[j],arr[j+1]);
					is_swap = true;
				}		
			}
			if(!is_swap)
				break;
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
	bubbleSort(arr,n);
	cout<<"Elements after sorting: ";
	for(int x:arr){
		cout<<x<<" ";
	}
return 0;
}

