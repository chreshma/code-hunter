#include<iostream>
using namespace std;
int main()
{
	int compare(double *,int,int);
	void swap(double *,int,int);
	int n,i=0,j,cat;
	cout<<"enter no of digits";
	cin>>n;
	double arr[n];
	cout<<"enter elements";
	for(j=0;j<n;j++)
	{
		cin>>arr[j];
	}
	while(i<n)
	{
		cat=compare(arr,i,n);
		if(cat==i)
		{
			i++;
		}
		else
		{
			swap(arr,cat,i);
		}
	}
	cout<<"after sorting";
	for(j=0;j<n;j++)
	{
		cout<<arr[j]<<"\n";
	}
}
int compare(double *a,int i,int n)
{	
	int count=0;
	for(int j=0;j<n;j++)
	{
		if(a[i]>a[j])
		{
			count++;
		}
	}
	return count;
}
void swap(double *a,int cat,int i)
{
	int temp;
	temp=a[i];
	a[i]=a[cat];
	a[cat]=temp;
	
}
