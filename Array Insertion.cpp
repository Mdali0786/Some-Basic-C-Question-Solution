#include<iostream>
using namespace std;
int main()
{
 int a[50],size,num,pos;
 cin>>size;
 if(size>50)
 {
  cout<<"overflow!!"<<endl;
 }else
 {
  for(int i=0;i<size;i++)
  {
   cin>>a[i];
  }
  cin>>num>>pos;
  for(int i=size-1;i>=pos-1;i--)
  {
   a[i+1]=a[i];
  }
  a[pos-1]=num;
  size++;
  for(int i=0;i<size;i++)
  {
   cout<<a[i]<<" ";
  }
 }
 }