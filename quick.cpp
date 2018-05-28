#include<iostream>
using namespace std;

int k;
class Quick
{
public:
void accept(int [],int);
void display(int [],int);
Quick();
};

Quick::Quick()
{
k=0;
}

void Quick::accept(int p[],int n)
{
cout<<"enter the elements"<<endl;
   for(int i=0;i<n;i++)
   {
   cin>>p[i];
   }
}

void Quick::display(int p[],int n)
{
cout<<"Input array is"<<endl;
   for(int i=0;i<n;i++)
   {
   cout<<p[i]<<"\t";
   }
cout<<endl;
}

void traverse(int p[],int down,int up)
{
int d=down;
int u=up;
k=down;
//if(d>=0 && u <5)
if(d<u){

while(d<u)
{
   while(p[d]<=p[k])
   {
   d++;
   cout<<"d is : "<<d<<endl;
   }
   while(p[u]>p[k])
   {
   u--;
   cout<<"u is : "<<u<<endl;
   }
      if(d<u)
      {
      cout<<"d<u"<<endl;
      int temp=p[d];
      p[d]=p[u];
      p[u]=temp;
      }
}
if(d>=u)
{
cout<<"d>u"<<endl;
int temp=p[k];
p[k]=p[u];
p[u]=temp;
}
//cout<<"AAAAAAAAAAAAAA"<<endl;  
traverse(p,down,u-1);
traverse(p,u+1,up);

}
}




int main()
{
int num;
Quick z;
cout<<"Enter the number of elements"<<endl;
cin>>num;
int *p=new int[num];
z.accept(p,num);
z.display(p,num);
traverse(p,0,num-1);
z.display(p,num);
return 0;
}
