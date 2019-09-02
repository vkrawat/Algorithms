#include<iostream>

using namespace std;


void merge1(int a[],int lb,int mid,int ub){
int i=lb;
int j=mid+1;
int k=lb;
int b[100];
while(i<=mid && j<=ub){

if(a[i]<=a[j]){
    b[k]=a[i];
    i++;
    k++;

}
else{
    b[k]=a[j];
    j++;
    k++;

}

}
if(j>ub){
while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
}

 else{   while(j<=ub){
        b[k]=a[j];
        j++;
        k++;
    }
 }







for(i=lb;i<=ub;i++)
		a[i]=b[i];

}


void mergesort(int a[],int lb,int ub){

    if(lb<ub){
int mid=(lb+ub)/2;

mergesort(a,lb,mid);
mergesort(a,mid+1,ub);
merge1(a,lb,mid,ub);


    }

}




int main(){

int a[10]={18,2,31,5,10};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Merge Sort"<<endl;
cout<<"Unsorted array :";
for(int i=0;i<5;i++)
    cout<<a[i]<<" ";


cout<<endl;
mergesort(a,0,4);
cout<<"Sorted array :";
for(int i=0;i<5;i++)
    cout<<a[i]<<" ";





return 0;
}
