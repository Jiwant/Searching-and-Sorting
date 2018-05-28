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
 void isort();
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

void Arr::isort()
{
 for(int i=0;i<num-1;i++)
  for(int j=i+1;j<num;j++)
   {
    if(arr[i]>arr[j])
     swap(arr[i],arr[j]);
   }
 cout<<endl<<"Array after Insertion Sort Operation"<<endl;
 dispArr();
}

int main()
{
 Arr x;
 x.getArr();
 x.dispArr();
 x.isort();
 return 0;
}
