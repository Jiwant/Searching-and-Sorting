#include<iostream>
using namespace std;

class Arr
{
	private:
		int num;
		int *arr;
	public:
		void getArr();
		void dispArr();
		int getnum();
		void split(int,int);
		void merge(int,int,int);
		void mergesort(int,int);
		~Arr();
};

void Arr::getArr()
{
			cout<<"Enter the Number of Elements"<<endl;
			cin>>num;
			arr=new int[num];
			cout<<"Enter the Elements of Array"<<endl;
			for(int i=0;i<num;i++)
			 cin>>arr[i];
			 
			cout<<endl;
			
}

void Arr::dispArr()
{
	cout<<"Showing the Elements of Array"<<endl;
	for(int i=0;i<num;i++)
	 cout<<arr[i]<<" ";
	cout<<endl;
}

void Arr::split(int i,int j)
{
	if(i==j)
	 cout<<arr[i]<<endl;
	
	else
	{
		int mid=(i+j)/2;
		split(i,mid);
		split(mid+1,j);
		for(int k=i;k<=j;k++)
		 cout<<arr[k];
		cout<<endl;
	}
}

Arr::~Arr()
{
	delete []arr;
}

int Arr::getnum()
{
	return num;
}

void Arr::merge(int l,int mid,int u)
{
	int i=l,
	j=mid+1;
	int n=u-l+1;
	int k=0;
	int *brr=new int[n];
	while(i<=mid||j<=u)
	{
		if(i>mid||j>u)
		 {
		 	if(i>mid&&j<=u)
		 	 brr[k++]=arr[j++];
		 	else if(i<=mid&&j>u)
		 	 brr[k++]=arr[i++];
		 }
		else
		 {
		    if(arr[i]<arr[j])
		     brr[k++]=arr[i++];
		    else
		     brr[k++]=arr[j++];
	     }
    }
        for(int k=0;k<n;k++)
		 arr[l+k]=brr[k];
}

void Arr::mergesort(int i,int j)
{
	if(i==j)
	 int pqr=1;
	
	else
	{
		int mid=(i+j)/2;
		mergesort(i,mid);
		mergesort(mid+1,j);
		merge(i,mid,j);
	}
}
int main()
{
	Arr x;
	x.getArr();
	x.dispArr();
	x.mergesort(0,x.getnum()-1);
	cout<<"Array after application of Merge Sort"<<endl;
	x.dispArr();
	return 0;
}
