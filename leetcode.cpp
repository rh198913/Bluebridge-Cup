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
    
