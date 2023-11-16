#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,j,max,min=0,mid,n1,temp,flag=0;
	cout<<"\tBinary Search";
	cout<<"\nEnter the number of terms: ";
	cin>>n;
	max=n-1;
	cout<<"Enter the number one by one : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Descending order : \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the number to search : ";
	cin>>n1;
	cout<<"\n\tLinear Search ";
	for(i=0;i<=n;i++)
	{
		if(n1==a[i])
		{
			cout<<"\nThe number "<<a[i]<<" found at the position "<<i+1;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\nNumber not found";
	}
	cout<<"\n\tBinary Search";
	flag=0;
	while(max>=min)
	{
		mid=(min+(max))/2;
		if(n1==a[mid])
		{
			cout<<"\nThe number "<<a[mid]<<" found at the position "<<mid+1;
			flag=1;
			break;
		}
		else if(n1<a[mid])
		{
			max=mid-1;
		}
		else
		{
			min=mid+1;
		}
	}
	if(flag==0)
	{
		cout<<"\nNumber not found";
	}
}

