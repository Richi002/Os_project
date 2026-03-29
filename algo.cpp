#include <bits/stdc++.h> 
using namespace std; 
int main() { 
int arr[7] = {2,4,6,8,10,12,14};  
int target;  
cout<<"Enter Target: "; 
cin>>target; 
int low = 0, high = 7 - 1, mid; 
while (low <= high) { 
mid = (low + high) / 2; 
if (arr[mid] == target) { 
cout <<"Target found at index: "<< mid; 
return 0; 
} 
if (arr[mid] < target) low = mid + 1; 
else high = mid - 1; 
} 
} 