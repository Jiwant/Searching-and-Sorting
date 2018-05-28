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
 void bsort();
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
  cout<<arr[i]<<" ";
}

void Arr::bsort()
{
 for(int i=0;i<num-1;i++)
  for(int j=0;j<num-i-1;j++)
   {
    if(arr[j]>arr[j+1])
     swap(arr[j],arr[j+1]);
   }
 cout<<endl<<"Array after Bubble Sort Operation"<<endl;
 dispArr();
}

int main()
{
 Arr x;
 x.getArr();
 x.dispArr();
 x.bsort();
 return 0;
}
 
