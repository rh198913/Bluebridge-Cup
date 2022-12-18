#include<iostream>
#include<string>
using namespace std;
    
//deep first 回溯的时候注意回复现场
//全排列
void swap(int arr[],int p,int q){
    int itmp = arr[p];
        arr[p] = arr[q];
        arr[q] = itmp;
}
void coutarr(int arr[],int n)
{
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void perm (int arr[],int p,int q){
    if(p == q){
        coutarr(arr,q+1);
    }else{
        for(int i=p;i<=q;i++){
            swap(arr,p,i);
            perm(arr,p+1,q);
            swap(arr,p,i);
        }        
    }
}
int main(){
    int arr[] = {1,2,3,4};
    perm(arr,0,3);
    return 0;
}
//改成字典式排列（回溯）
void swap(int arr[],int p,int q){
    int itmp = arr[q];
    for(int i=q;i>=p+1;i--){
        arr[i] = arr[i-1];
    }
        arr[p] = itmp;
}
void swapback(int arr[],int p,int q){
    int itmp = arr[p];
    for(int i=p;i<=q-1;i++){
        arr[i] = arr[i+1];
    }
        arr[q] = itmp;
}
void coutarr(int arr[],int n)
{
    for(int i = 0;i<n;i++){
        cout<<arr[i];//找个变量把q存起来，然后依次往前移
    }
    cout<<endl;
}
void perm (int arr[],int p,int q){
    if(p == q){
        coutarr(arr,q+1);
    }else{
        for(int i=p;i<=q;i++){
            swap(arr,p,i);
            perm(arr,p+1,q);
            swapback(arr,p,i);
        }        
    }
}
int main(){
    int arr[] = {1,2,3,4};
    perm(arr,0,3);
    return 0;
}

