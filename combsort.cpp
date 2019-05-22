// C++ implementation of Comb Sort 
#include <iostream> 
using namespace std; 

// To find gap between elements 
int nextSpan(int span) 
{ 
	
	span = (span * 10) / 13; 

	if (span < 1) 
		return 1; 
	return span; 
} 


void combSort(int a[], int n) 
{ 
	
	int span = n; 
	bool swapped = true; 

	while (span != 1 || swapped == true)
     { 
		span = nextSpan(span); 
		// check if swap happened or not 
		swapped = false; 
        
        // Compare all elements with current gap 
		for (int i = 0; i < n - span; i++)
        { 
			if (a[i] > a[i + span]) 
            { 
				std::swap (a[i], a[i + span]); 
				swapped = true; 
			} 
		} 
	} 
} 

// Driver program 
int main() 
{ int i,a[20],n;
   	cout<<"Enter your array:"<< endl;
	for(i=0;i<n;i++)
    {
      cin >> a[i];
    }
	 n = sizeof(a) / sizeof(a[0]); 

	combSort(a, n); 

	cout<<"Sorted array: \n"; 
	for (int i = 0; i < n; i++) 
		cout<<a[i]; 

	return 0; 
} 

