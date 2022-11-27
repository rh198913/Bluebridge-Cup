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
//数列排序

 /* void bubble(int arr[],int z)
 {   
    //int z = sizeof(arr)/sizeof(arr[0]); 
    for(int i=0;i<z-1;i++){
        for(int j=0;j<z-1-i;j++){
            if(arr[j]> arr[j+1]){
                int itmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = itmp;
            }
        }
    }
    
 }
 int main()
 {
  int z;
  cin>>z;
  int arr[z];
    for ( int i = 0; i < z; i++)
 {
     cin>>arr[i];
 }
  
    bubble(arr,z);
    for(int i=0;i<z;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
 } */  
 //闰年判断
 /* int main()
 {
    int n;
    cout<<"输出一个年份"<<endl;
    cin>>n;
    if((n%4==0&&n%100!=0)||n%400 == 0)
       cout <<"yes"<<endl;
    else
       cout <<"no"<<endl;
    return 0;
 }  */
 //01字符串
 /* int pow(int x,int y){
    int z = x;
    if(x == 1)
        return 1;
    if(y==0)
    return 1;
        while (y!=1)
        {
           z=z*x;
           y--;
        }
    return z;
 }
 int main()
 {   
    int x = 5;
    int m = 0;
    for(int i = 0;i<32;i++){ 
        int y = i;
        int n = x;   
       while(n!=0){
        m = y /pow(2,n-1);
        cout<<m;
        y = y %pow(2,n-1);
        n--;       
    } 
    cout<<endl;
}
    return 0;
} 
 */
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<=n;i++){
        for(int j = i;j<m;j++){
            char x  = ('A'+j);
            cout <<x; 
            int m = 

        
        }
        cout<<endl;
    }
    return 0;
}
//数列特征
/* int main()
{
   int n;
   int num = 0;
   cin>>n;
   int arr[n];
   for(int i = 0;i<n;i++){
    cin>>arr[i];   
   }
   int a = arr[0];
   int b = arr[0];
   for(int i = 0;i<n;i++){
    num += arr[i];
    if(arr[i]>a)
        a = arr[i];  
    if(b>arr[i])
        b = arr[i];
   }
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<num<<endl;
   return 0;
} */
/* int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"输出你需要的数"<<endl;
    cin>>m;
    for(int i = 0;i<n;i++){
        int k = i;
            k++;           
        bool c = false;//用来标记
        if(arr[i] == m){
            cout<<k;           
            c = true;
            if(c)
            return 0; 
        }   
    }
     cout <<-1;
     return 0;
}*/
//杨辉三角
/* int main()
{
    int n;
    cin >>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j =0;j<=i;j++){
            if(i==0||j==0||i==j)
                a[i][j] = 1;
            else{
                a[i][j] = a[i-1][j-1]+a[i-1][j]; 
              } 
              cout<<a[i][j]<<' ';         
        }
        cout<<endl;
    }
     return 0;  
} */

/* int main()
{
    float t,c,s;
    float t1;
    float v;
    cin>>t>>c>>s;  
    v = c/t;
    t1 = s/v-t;
       
  cout << (int)t1<<endl;    
} */
  /* int main()
{
   int n;
   cin>>n;
   string  a[n];
   string b[10];
   for(int i = 0;i<5;i++){
       cin>>a[i];
   }
   for(int i = 0;i<5;i++){
    if(a[i] != a[i+1])
        b[i] = a[i];   
   }
   for(int i;i<n;i++){
    cout<<b[i]<<endl;
   }
   return 0;
} 
 */
 /* int main()
 {
    int  n,m;
    int g = 10;
    int num=0;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<g;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
           for(int k = 0;k<g;k++)

        if(a[i][j]==a[i-1][j-1]&&a[i-1][j-1]==a[i-1][j+1]&&a[i-1][j+1]==a[i+1][j-1]&&a[i+1][j-1]==a[i+1][j+k])
        ||(a[i][j]==a[i-2][j-2]&&a[i-2][j-2]==a[i-2][j+2]&&a[i-2][j+2]==a[i+2][j-2]&&a[i+2][j-2]==a[i+2][j+2]))
        num++;
    }
    cout<<num<<endl;
    return 0;
 } */
 
/* bool k(int a[],int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
                return true;
        
            return false;      
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int num =0;
    for(int i=0;i<n;i++){
        cin>>a[i];       
    }
    while (k(a,n))
    {
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                num = num+a[i];
                int t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;               
        }
    }   
    cout<< num <<endl;
    return 0;
    }
} */

