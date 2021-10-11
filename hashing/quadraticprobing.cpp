/*
quadratic probing
*/
#include<bits/stdc++.h>
using namespace std;

   void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int N)
   {
       //Your code here
       
       for(int i = 0; i < hashSize; ++i) hash[i] = -1;
       
       for(int i = 0; i < N; ++i) {
           
           int index = arr[i] % hashSize;
           
           if(hash[index] == -1) hash[index] = arr[i];
           
           else {
               
               for(int k = 1,count = 0; count <= hashSize and hash[index] != -1 ; ++k,++count) {
                   index = (arr[i] + (k*k)) % hashSize;
               }
               
               if(hash[index] == -1) hash[index] = arr[i];
           }
       }
}

int main(){
	int n;
	cout<<"Enter size of array";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array";
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	vector <int> hashmap;
	int hashSize=10; // should be greater tha sizeoff array;
//	cout<<"Enter HashSize: ";
//	cin>>hashSize;
	QuadraticProbing(hashmap,hashSize,arr,n);
	for(int x:hashmap){
		cout<<x<<" ";
	}
	

return 0;
}


