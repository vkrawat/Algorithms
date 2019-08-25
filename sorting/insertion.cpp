#include<iostream>

using namespace std;

int main(){

int a[10],n,i,j,temp;
cout<<"Enter size of array";
cin>>n;
cout<<"Enter the array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=1;i<n;i++)
{

    temp=a[i];
    j=i-1;

    while(i>=0 && a[j]>temp)
    {a[j+1]=a[j];
    j--;}

    a[j+1]=temp;

}
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}


return 0;
}
