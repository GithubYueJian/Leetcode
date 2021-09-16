class Solution {
public:
int divide(int a, int b) {
    if (a == INT_MIN && b == -1) return INT_MAX;

    int sign = (a > 0) ^ (b > 0) ? -1 : 1;

    unsigned int ua = abs(a);
    unsigned int ub = abs(b);
    unsigned int res = 0;
    for (int i = 31; i >= 0; i--) {
        if ((ua >> i) >= ub) {
            ua = ua - (ub << i);
            res += 1 << i;
        }
    }
    // bug 修复：因为不能使用乘号，所以将乘号换成三目运算符
    return sign == 1 ? res : -res;
}

};
