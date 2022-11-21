#include <iostream>
using namespace std;
//顺子日期
/* int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int  b[8];
    b[0] = 2;
    b[1] = 0;
    b[2] = 2;
    b[3] = 2;
    int sum = 0;
    for(int i = 1; i<=12;i++){
         b[4] = i/10;
         b[5] = i%10;
        for(int j = 1;j<=arr[i];j++){
            b[6] = j/10;
            b[7] = j%10;
            if((b[4]+1 == b[5])&& (b[5]+1 == b[6])||(b[5]+1 == b[6])&& (b[6]+1 == b[7])){
                sum++;
            }       
        }      
    }
    cout<<sum<<endl;
    return 0;
} */
/* int main()
{
    int a = 0;
    int b = 0;
    int n = 0;
    cout<<"请输入三个整数："<<endl;
    cin>>a>>b>>n;
    int day = n/(a*5 + b*2)*7;
    int count = n%(a*5 + b*2);
    if(count > 5*a)
    {
        day  = day + 5+ (count%(5*a))/b;
        if((count -5*a)%b != 0 ){
            day = day+1;                    
        }
    }else{
        day = day + (count/a);
        if(count%b != 0)
        {
           day = day+ 1; 
        }
    }
    cout <<"大于刷题的天数是："<<day<< endl;
    return 0;
}
 */
int  max(int a,int b,int c){
    if(a>c){
        if(a>b){
            return a;
        }else
            return b;
    }else{
        if(c>b)
            return c;
        else
            return b;
    }
}
int main()
{
    int n;
    int high;
    cin>>n;
    for(int i = 1;i<=n;i++){
      cout << max((i-1),(n-i))*2<<endl;//项数 = （末项 - 首项）/ 公差+1
    }
     return 0;
}

