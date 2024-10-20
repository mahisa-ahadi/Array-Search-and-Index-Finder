#include<iostream>
using namespace std;
int main(void)
{
	int size;
	cout<<"Enter the size of your array: ";
	cin>>size;
	float a[size],b[size];
	for(int i=0;i<size;i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	//copying array a in array b
	for(int i=0;i<size;i++)
	{
		b[i]=a[i];
	}
	//bubble sort for b
	float temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
		
	}
	cout<<endl;


    //binary search
    float value;
	int index=-1;
    cout<<"Enter the value you are looking for: ";
    cin>>value;
    int low=0,high=size-1,mid;
    while(low<=high)
    {
    	mid=(low+high)/2;
    	if(value==b[mid])
    	{
    	 index=mid;
		 break;	
		}
		
    	if(value<b[mid])
    	{
    		high=mid-1;
		}
    	if(value>b[mid])
    	{
    		low=mid+1;
		}
	}
	if(index==-1)
	cout<<"The value "<<value<<" is not found!"<<endl;
	else
		for(int i=0;i<size;i++)
			{
				if(b[index]==a[i])
				 {
				 	index=i;
				 	break;
				 }
			}
	 cout<<"The value "<<value<<" is found at a["<<index<<"]"<<endl;
	return 0;
}