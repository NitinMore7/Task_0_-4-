#include<iostream>
void selectionSort(int arr[], int n)  
{  
    int i,j, min, temp,pos; 
    for(i=0;i<n-1;i++)
    {
        min=arr[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                pos=j;
            }
        }
 
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
 
    std::cout<<"\nSorted list is as follows\n"; 
    for (i=0; i < n; i++)  
        std::cout << arr[i] << " ";  
    
}  
    
int main()  
{  
    int arr[50],n;
    std::cout<<"Enter the number of elements in the array";
    std::cin>>n;
    std::cout<<"Enter the elements of the array";
    for (int i=0; i<n ; i++)
    std::cin>>arr[i];  
    selectionSort(arr, n);  
	return 0 ; 
}   
