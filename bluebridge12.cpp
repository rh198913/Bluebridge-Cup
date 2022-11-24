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
//货物摆放 思路；找出所有约数，枚举所有约数，判断成立的方案个数
main()
{
   typedef long long ll;
   ll tol = 0;
   ll n = 2021041820210418;  
      for(ll i = 1;i*i<= n;i++)//类似于开根号的想法，只需要求出前半部分的约数
      {
        if(n%i == 0){
        ll a = i;
        ll n1 = n/a;
           for(ll j = 1;j*j<n1;j++){             
              if(n1%j == 0){
              ll b = j;
              ll c = n1/b;
              if(a<=b&&b<=c){
                if(a==b&&b==c) tol++;
                if(a==b&&b!=c) tol +=3;
                if(a!=b&&b==c) tol +=3;
                if(a==c&&b!=c) tol +=3;
                if(a!=b&&b!=c&&a!=c) tol +=6;
              }
          }
        }
   }
   }
   cout << tol <<endl;
}
//年号字串
/* int main()//计算出两位字符的数，后面遍历++
{
    int num = 702;
    for(char x ='A';x<='Z';x++){
        for(char y ='A';y<='Z';y++){
            for(char z ='A';z<='Z';z++){
                    num++;
                 if (num == 2019)                
                 cout<<x<<y<<z<<endl;                
                            
            }
        }
    }
}  */
//typedef long long ll;
 /* int main()
{
    int a = 1;
    int b = 1;
    int c = 1;
    int d = 0;
    int n = 3;
    {
        while(n != 20190324){
            n++;//只是为了退出循环   
            d = (a+b+c)%10000;
            a = b;
            b = c;
            c = d;
        }
        cout <<d<<endl;
    }
    return 0;
} 
 */
/* int a[20190324];
int main()
{
	a[0]=1,a[1]=1,a[2]=1;
	for(int i=3;i<=20190324;i++)
    {
		a[i]=a[i-1]+a[i-2]+a[i-3];
           a[i] %= 10000;
    }
	cout <<a[20190323]<<endl;
	return 0;
} */
bool f(int x)
{ 
    int n = x;
    while(n!=0)
    {
        if(n%10==2||n%10==4)
            return false;
            n/= 10;
    }
    return true;
}
int main()

{
    int n = 0;
    for(int i = 1;i<2019;i++){
        for(int j = i+1;j<2019;j++){
            int k = 2019-i-j;
            if(f(i)&&f(j)&&f(k)&&(j<k))
            n++;
    
        }
    }
    cout<<n;
    return 0;
}
