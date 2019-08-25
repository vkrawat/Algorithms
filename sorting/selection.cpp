#include<iostream>

using namespace std;


int main(){
 int a[10],n,i,j,min,temp;

 cout<<"Enter size of array";
 cin>>n;
 cout<<"Enter the unsorted array";
 for(i=0;i<n;i++)
    cin>>a[i];
 for(i=0;i<n;i++)
 {
     min=a[i];
     for(j=i+1;j<n;j++)
     {if(a[j]<min){
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;#include<iostream>

using namespace std;


int main(){
 int a[10],n,i,j,min,temp;

 cout<<"Enter size of array";
 cin>>n;
 cout<<"Enter the unsorted array";
 for(i=0;i<n;i++)
    cin>>a[i];
 for(i=0;i<n;i++)
 {
     min=i;
     for(j=i+1;j<n;j++)
     {if(a[j]<a[min])
         min=j;}
     temp=a[i];
     a[i]=a[min];
     a[min]=temp;

     }





 cout<<"The sorted array is ";
 for(i=0;i<n;i++)
    cout<<a[i]<<" ";






return 0;
}


     }



 }
 }
 cout<<"The sorted array is ";
 for(i=0;i<n;i++)
    cout<<a[i]<<" ";






return 0;
}
