 #include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*y;
	*y=*x;
	*x=temp;
}

class Arr
{
	private:
		int num;
		int *arr;
	public:
		void getArr();
		void dispArr();
		int getnum();
		int partition(int,int);
		void quicksort(int,int);
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
	cout<<"Showing the Element of Array"<<endl;
	for(int i=0;i<num;i++)
	 cout<<arr[i]<<" ";
	cout<<endl;
}

Arr::~Arr()
{
	delete []arr;
}

int Arr::getnum()
{
	return num;
}

int Arr::partition(int p,int q)
{
	int x=arr[p];
	int i,j;
	i=p;
	for(j=p+1;j<=q;j++)
	{
		if(arr[j]<=x)
		{
			i=i+1;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[p],arr[i]);
	return i;
}

void Arr::quicksort(int p,int q)
{
	if(p>=q)
    {
        int pqr=3;
         return;
	}
   	 
	
	else
	{
		int m=partition(p,q);
		quicksort(p,m-1);
		quicksort(m+1,q);
	}
	x.dispArr()
}


int main()
{
	Arr x;
	x.getArr();;
	x.quicksort(0,x.getnum()-1);
	cout<<"Displaying Array after QuickSort"<<endl;
	x.dispArr();
	
	return 0;
}
