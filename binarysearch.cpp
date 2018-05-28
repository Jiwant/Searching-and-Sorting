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
 int getnum()
 {
  return num;
 }
 void bsearch(int,int,int);
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

void Arr::bsearch(int n,int l,int u)
{
 if(l==u)
 {
  if(arr[l]!=n)
   cout<<"Number dont exist in the Array List"<<endl;
  else
   cout<<"Position of Element "<<u+1<<endl;
 }
 if(l!=u)
 {
  int mid=(l+u)/2;
  if(n==arr[mid])
   bsearch(n,mid,mid);
  else
   {
    if(n<arr[mid]) 
     bsearch(n,l,mid-1);
    else
     bsearch(n,mid+1,u);
   }
 }
}

int main()
{
 Arr x;
 int n;
 x.getArr();
 x.dispArr();
 cout<<"Enter the Value you want to Search"<<endl;
 cin>>n;
 x.bsearch(n,0,x.getnum()-1);
 return 0;
}
