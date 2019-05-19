#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int n,i,j,a[50],temp;
  cout<<"Enter total no of elements"<<endl;
  cin>>n;

  //getting the elements of array
  cout<<"Enter the array:"<<endl;
  for(i=0;i<n;i++)
  cin>>a[i];

  //bubble sort
  for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-i-1;j++)
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
  }

  cout<<endl;

  //for printing sorted array in ascending
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";

 getch();

 }