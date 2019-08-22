#include<iostream>

using namespace std;


int main(){

int a[10],n,left,right,mid,data,flag=0;
cout<<"Enter the size of array";
cin>>n;
cout<<"Enter a sorted array";
for(int i=0;i<n;i++){
    cin>>a[i];
}

cout<<"Enter the data to be searched";
cin>>data;
left=0;
right=n-1;
mid=(left+right)/2;

while(left<=right){
    if(a[mid]==data)
        {flag=1;
        cout<<"The element is present at pos "<<mid+1;
        break;}
    else if(data>a[mid])
        left=mid+1;
    else if(data<a[mid])
        right=mid-1;
    mid=(left+right)/2;
}


if(flag==0)
    cout<<"The element is not present in the array";


return 0;
}
