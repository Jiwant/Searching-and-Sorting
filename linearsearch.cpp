#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
 int temp;
 temp=*y;
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
 void lsearch(int);
 ~Arr()
 {
  delete []arr;
 }
};

void Arr::getArr()
{
 cout<<"Enter the Number of Elements "<<endl;
 cin>>num;
 arr=new int[num];
 cout<<"Enter the Elements of Array"<<endl;
 for(int i=0;i<num;i++)
  cin>>arr[i];
}

void Arr::dispArr()
{
 cout<<"Displaying the Elements of Array"<<endl;
 for(int i=0;i<num;i++)
  cout<<arr[i]<<endl;
}

void Arr::lsearch(int n)
{
 for(int i=0;i<num;i++)
  if(arr[i]==n)
   cout<<"Position of Number in the Array is "<<i+1<<endl;
}

int main()
{
 Arr x;
 int n;
 x.getArr();
 x.dispArr();
 cout<<"Enter the Value you want to Search"<<endl;
 cin>>n;
 x.lsearch(n);
 return 0;
} 
