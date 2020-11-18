#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp= *a;
	*a= *b;
	*b=temp;
}
void bubble_sort(int arr[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(arr[j-1]>arr[j])
			swap(arr[j-1],arr[j]);
		}
	}
}

int main()
{
  int arr[5]={4,3,2,1,0};
  int n= sizeof(arr)/sizeof(arr[0]);
  bubble_sort(arr,n);
  for(int i=0;i<n;i++)
  {
  	cout<<arr[i]<<"\t";
  }
}

