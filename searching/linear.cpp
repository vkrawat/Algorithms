#include<iostream>

using namespace std;

int main(){

int a[10],n,data,found=0;
cout<<"Enter size of array";
cin>>n;
cout<<"Enter array";
for(int i=1;i<=n;i++)
    cin>>a[i];
cout<<"The array is:";
for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
cout<<"\nEnter the data to be searched";
cin>>data;
for(int i=1;i<=n;i++){
    if(a[i]==data)
    {
        cout<<"The element is found at pos "<<i;
        found=1;
        break;
    }

}

if(found==0)
    cout<<"Not present in the array";





return 0;
}
