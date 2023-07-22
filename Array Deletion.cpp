#include<iostream>
using namespace std;
int main()
{
 int a[50],size;
 cin>>size;
 for(int i=0;i<size;i++)
 {
  cin>>a[i];
 }
 int pos;
 cin>>pos;
 if(pos<=0||pos>size)
 {
  cout<<"invalid condition !"<<endl;
 }else
 {
  for(int i=pos-1;i<size-1;i++)
  {
   a[i]=a[i+1];
  }
  size--;
  for(int i=0;i<size;i++)
  {
   cout<<a[i]<<" ";
  }
 }

}
