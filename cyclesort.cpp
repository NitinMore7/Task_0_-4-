#include<iostream>
using namespace std;
void swapping(int &a, int &b) 
  {   
     int temp;
     temp = a;
     a = b;
     b = temp;
  } 

void display(int *array, int size) 
  {
     for(int i = 0; i<size; i++)
        cout << array[i] << " ";
     cout << endl;
  }

void cycleSort(int *array, int n)
{
   for(int start = 0; start<n-1; start++) 
     {    
        int key = array[start];
        int location = start;
        for(int i = start+1; i<n; i++) 
        { 
          if(array[i] < key)
             location++;
        }

      if(location == start) 
         continue;
      while(key == array[location])
         location++;
      if(location != start) 
         swapping(array[location], key);

      while(location != start) 
      {
         location = start;

         for(int i = start+1; i<n; i++) 
         { 
            if(array[i] < key)
               location++;
         }

         while(key == array[location]) 
            location++;
         if(key != array[location])
            swapping(key, array[location]);
      }
   }
}

int main() 
{
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n]; 
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) 
   {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   cycleSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
