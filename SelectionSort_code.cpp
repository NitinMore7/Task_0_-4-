/* C++ code on selection sort */
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j;
int arr[1000];
cout<<"Input the Number of elements";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter element"<<i+1<":";
cin>>arr[i];
}
for(i=0;i<n;i++)
{
   for(j=i+1;j<n;j++)
   {
      if(arr[i]>arr[j]
      {
      arr[i]=arr[i]+arr[j];
      arr[j]=arr[i]-arr[j];
      arr[i]=arr[i]-arr[j];
      }
    }  
 }
 cout("Sorted array");
 for(i=0;i<n;i++)
 {
 cout<<arr[i]<<"\n";
 }
 getch();
 return 0;
} 
 
 
 
 
 
