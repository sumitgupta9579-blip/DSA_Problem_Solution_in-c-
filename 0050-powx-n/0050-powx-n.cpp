class Solution {
public:
    double Pow(double a, long long b) {
        if (b == 0) return 1;
        double half = Pow(a, b / 2);
        if (b % 2 == 0) return half * half;
        else return a * half * half;
    }
    double myPow(double a, int b) {
        bool flag = (b>=0);
        long long b2=b;
        double ans = Pow(a,abs(b2));
        if(flag==false) ans = 1/ans;
        return ans;
    }
};