#include<iostream>
using namespace std;
int main()
{
	int a[5],j,k,i,item,top=0,n=5;
	cout<<"\n\tStack Operations: \n\n";
	cout<<"\nEnter the size of stack : ";
	cin>>n;
	
	b:
		cout<<"\n\n1.Push\n2.POP\n3.List Of Stack\n4.Exit\nEnter your choice(1-4): ";
		cin>>j;
		switch(j)
		{
			case 1:
				cout<<"Enter the element do you want to insert : ";
				cin>>item;
				if(top==n)
				{
					cout<<"\nStack is Full";
					goto b;
				}
				else
				{
					top=top+1;
					a[top]=item;
					cout<<item<<"is added to stack";
				}
				goto b;
			case 2:
				if(top<=0)
				{
					cout<<"\nStack is empty";
					goto b;
				}
				else
				{
					k=a[top];
					top=top-1;
					cout<<"\nDeleted item is "<<k;
				}
				goto b;
			case 3:
				cout<<"\nList of stack :\n\n";
				for(i=1;i<=top;i++)
					cout<<a[i]<< "  ";
		}
}
