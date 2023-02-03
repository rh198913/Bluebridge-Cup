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
//随机月份，编写一个随机产生1和12之间的整数的程序，并且根据数字显示相应的单词
/* int main(){
    string arr[12] = {"january","february","march","april","may","june",
    "july","august","september","october","november","december"};
    int z = sizeof(arr)/sizeof(0);
    int n;
    cout<<"请输入你想输入的月份："<<endl;
    cin>>n;   
    cout<<arr[n-1]<<endl;
    return 0;
} */
//计算三角形的周长
/* int main(){
    int a,b,c; 
    int sum = 0;
    cout<<"请输入三角形的三条边长"<<endl;
    cin>>a>>b>>c;
    if((a+b<=c)||(a+c<=b)||(b+c<= a))
        cout<<"输入的边长不对"<<endl;
    else
        sum = a + b + c;
        cout <<sum<<endl;  
    return 0;
 } */
/* //抽牌，模拟一副52张的牌并随机抽取一张，并显示牌的大小和花色
 int main()
 {
    srand ((unsigned)time(0));
    //如果不用srand函数，用rand产生的随机数多次运行结果一样
    string arr1[] = {"1","2","3","4","5","6","7","8","9","10","J","Q","K"};
    string arr2[] = {"方块","梅花","红桃","黑桃"};   
    int p = rand()%52;
    cout<<"抽到的是：";
    cout<<arr1[p/13]<<arr2[p/4]<<endl;   
 }
  */
int main()
{
	int n;
	cout<<"请输入1到15之间的整数"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)//循环打印n行
	{
		for(int j=0;j<(n-i)*3;j++)
			cout<<" ";
            //经过我的观察，每一行前有(n-i)*3个空格，其中n是总行数，i是当前行数
		int t=i;
		while(t!=0)
		{
			t<10?cout<<t<<"  ":cout<<t<<" ";
            //输出当前行i到1递减的数字，并且，每输出一次数字后判断这个数字是否是两位数，
            //如果是就输出这个数字后只输出一个空格，不是就输出两个空格
			t--;
		}
		t=2;
		while(t<=i)
		{
			t+1<10?cout<<t<<"  ":cout<<t<<" ";
            //输出当前行2到i递增的数字，并且，每输出一次数字后判断下一个数字是否是两位数，
            //如果是就输出这个数字后只输出一个空格，不是就输出两个空格
			t++;
		}
		cout<<endl;
	}
    return 0;
}
int main()
{
    int num ;
    cout<<"每个月第一天分别是";
    int arr[12] = {1,32,60,91,121,151,182,213,243,274,304,335};
    for(int i;i<=12;i++){
        num = arr[i]%7;
        cout<<"星期"<<num<<endl;   
    }
    return 0;
} 
/* //完全数，如果一个数等于他所有除数之和，写求出10000以内四个数
int main(){
    for(int i = 2;i<10000;i++){
        int a = 2; 
        int num = 1;      
        while(a <= sqrt(i)){
        if(i%a == 0){
            if(a!=i/a)
                num += a+i/a;           
                else num += a;
        }
        a++;
        }
        if(num == i) cout<<num<<endl;      
    }
    return 0;
} */


 
      
     
    
