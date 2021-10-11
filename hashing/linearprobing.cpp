/*
Linear probing
*/
#include<bits/stdc++.h>
using namespace std;

    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
          vector<int> hashTable(hashSize,-1);
       
       for(int i = 0; i < sizeOfArray;++i) {
           
           int index = arr[i]%hashSize;// formula to find index
           
           if(hashTable[index] == -1) hashTable[index] = arr[i];
           
           else {
               int count = 0;
               // Count prevents loop from running infinitely.....
               
               while(hashTable[index] != -1 and count <= hashSize) {
                   if(hashTable[index] == arr[i]) break;  // Remember to check for duplicates.
                   
                   index = (index+1)%hashSize;
                   count++;
               }
               if(hashTable[index] == -1) hashTable[index] = arr[i];
           }
       }
       return hashTable;
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
	hashmap = linearProbing(hashSize,arr,n);
	for(int x:hashmap){
		cout<<x<<" ";
	}
	

return 0;
}

