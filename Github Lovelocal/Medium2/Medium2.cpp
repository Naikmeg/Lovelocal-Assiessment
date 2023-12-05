// C++ program to find Majority
// element in an array
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// Function to find Majority element
// in an array
void findMajority(int arr[], int n){
	int count1 = 0, count2 = 0;
	int first=INT_MAX, second=INT_MAX;
	int flag=0;
	for (int i = 0; i < n; i++) {

		// if this element is previously seen,
		// increment count1.
		if (first == arr[i])
			count1++;

		// if this element is previously seen,
		// increment count2.
		else if (second == arr[i])
			count2++;
	
		else if (count1 == 0) {
			count1++;
			first = arr[i];
		}

		else if (count2 == 0) {
			count2++;
			second = arr[i];
		}

		// if current element is different from both the previously seen variables,
		//decrement both the counts.
		else {
			count1--;
			count2--;
		}
	}

	count1 = 0;
	count2 = 0;

	// Again traverse the array and find the
	// actual counts.
	for (int i = 0; i < n; i++) {
		if (arr[i] == first)
			count1++;

		else if (arr[i] == second)
			count2++;
	}
	
	if (count1 > n / 3){
		cout << first << " ";
		flag=1;
	}
	if (count2 > n / 3){
		cout << second << " ";
		flag=1;
	}
	if(flag==0){
		cout << "No Majority Element" << endl;
	}
}

int main() {
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int arr[size];
	//Applying the array length constraints in the question 
    if(size<=520 && size>=1)
	{ 
	cout << "Enter the element: ";
	for (int z = 0; z < size; z++) { 
		cin >> arr[z]; 
		if(arr[z]>109 || arr[z]<-109) //Element value limit as given in question
		{
		    cout<<"Entered Value is too large\nPlease Restart";
		    exit(0);
		}
	} 
	cout << "The array elements are: "; 
	for (int z = 0; z < size; z++) { 
		cout << arr[z] << " "; 
	} 
	cout<<"\n Majority Elements:";
	//int arr[] = { 3, 3, 3, 1, 3, 2, 1, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function calling
	findMajority(arr, n);
	}
	else
	cout<<"Array Limit Exceeded";

	return 0;
}
