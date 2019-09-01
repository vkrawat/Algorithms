#include<iostream>

using namespace std;

void swap(int &start,int &ends){
    int temp;
    temp=start;
    start=ends;
    ends=temp;




}


int partion(int a[],int lb,int ub){



int pivot,start,ends,temp;
pivot=a[lb];
start=lb;
ends=ub;
while(start<ends){
while(a[start]<=pivot){
    start++;
}
while(a[ends]>pivot){
    ends--;

}

if(start<ends){
    swap(a[start],a[ends]);

}

}
swap(a[lb],a[ends]);

return ends;

 }

 void quicksort(int a[],int lb,int ub){
     int pos;
     if(lb<ub){

        pos=partion(a,lb,ub);
        partion(a,lb,pos-1);
        partion(a,pos+1,ub);
     }







 }




int main(){

cout<<"Quick sort"<<endl;
int a[5]={12,5,23,32,6};
cout<<"Unsorted array :";
for(int i=0;i<5;i++)
cout<<a[i]<<" ";
cout<<endl;


quicksort(a,0,4);

cout<<"Sorted Array :";
for(int i=0;i<5;i++)
cout<<a[i]<<" ";

return 0;
}
