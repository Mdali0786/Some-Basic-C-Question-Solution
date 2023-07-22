#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 int d;
 cin>>d;
 int b[n];
 for(int i=0;i<n;i++)
 {
  b[(i+d)%n]=a[i];
 }
 for(int i=0;i<n;i++)
 {
 cout<<b[i]<<" ";
 }
}
