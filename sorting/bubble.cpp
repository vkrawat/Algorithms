#include<iostream>

using namespace std;

int main(){

    int a[10],i,j,n,temp;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter unsorted array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=5;i>0;i--){



        for(j=0;j<i;j++)
            if(a[j]>a[j+1])
        {temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;



        }

    }
    cout<<"The sorted array is ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }




return 0;
}
