#include <iostream>
using namespace std;
/* int main(){
    int a = 256*1024*1024;
    cout<<a/4<<endl;
    return 0;
} */
/* int  main(){   
    int a = 2021;
    for(int i = 1;i<5000;i++){
        if(i%10 == 1)
            a--;
        if(i/10%10 == 1)
            a--;
        if(i/100%10 ==1)
            a--;
        if(i/1000==1)
            a--;
        if(a == 0)
            cout << i<<endl;
        continue;        
    }
    return 0;
}
 */
int main()
{
    int number [10];
    for(int i= 0;i<=9;i++)
        number[i]= 2021;
    for(int i = 1;;i++){
        int itmp = i;
        while(itmp !=0){
            int t = itmp%10;
            if(number[t] <= 0){
                cout <<i-1<<endl; 
                return 0;               
            }
            number[t]--;
            itmp /= 10;
            
        }
    }
}
