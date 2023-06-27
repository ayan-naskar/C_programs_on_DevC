#include<iostream>

using namespace std;
void sort(int arr[],int n){
    int c1=0,c0=0,c2=0;
    //cout << c0 << " " << c1 << " " << c2 << endl;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
          c0++;
        }
        else if(arr[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    int n1=0;
    //cout << c0 << " " << c1 << " " << c2 << endl;
    while(c0>0){
        arr[n1]=0;
        n1++;
        c0--;
    }
    while(c1>0){
        arr[n1++]=1;
        c1--;
    }
    while(c2>0){
        arr[n1++]=2;
        c2--;
    }
    
}
int main(){
    int arr[30];
    int s;
    cout<<"Please Enter the size of Array(0,1,2) :"<<" "<<endl;
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    sort(arr,s);
    cout<<"After Sorting : "<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }

}
/*
4
2 1 0 2

*/
