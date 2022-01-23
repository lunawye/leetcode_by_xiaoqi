class Solution {
public:
    double count(double x,long long n)
    {
        if(n==0) return 1.0;//循环结束，返回1.0
        double y=count(x,n/2);//x^n=x^(n/2)*x^(n/2)，直至拆分完
        return n%2==0? y*y:y*y*x;//如果是奇数次再乘x
    }
    double myPow(double x, int n) {
        if(x==1) return 1;//如果是1，直接返回1
        long long N=n;//不是long long 会出错
        return  N>=0? count(x,N):1.0/count(x,-N); 
    }
};
