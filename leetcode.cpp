#include <iostream>
using namespace std;
//哔站小猫学IT两数字和（无序数组）
//第一题，两数字和（无序数组）
int main(){
    int arr[4] = {1,2,7,9};
    int target = 10;
    int z = sizeof(arr)/sizeof(arr[0]); 
    int total[] = {1,2};
    for(int i = 0;i<=z;i++){
        for(int j = i+1;j<=z;j++){
            int sum =arr[i]+arr[j];
            if(sum == target){
            total[0] = i;
            total[1] = j;           
        }
       }
    }
        cout<<total[0]<<endl;
        cout<<total[1]<<endl;    
    return 0;
}
//简单题
//读取1-1000之间的整数，求整数各位数的和
/*
int main(){
    int n;
    int num = 0;
    cin>>n;
    while(n){
        int m = n%10;
        num = num + m;
        n = n/10;
    }
    cout<<num<<endl;
    return 0;
} */
//金融应用，复利值，每月存一百元，年利率，每月0.05/12 = 0.00417
/* int main(){
    int n;
    cout<<"请输入n个月后账户上的钱"<<endl;
    cin>>n;
    double m = 0;
    while (n){   
        m = (100 + m)*(1.0+0.05/12);
        n--;
    }
    cout<<m<<endl;
    return 0;
} */
    
