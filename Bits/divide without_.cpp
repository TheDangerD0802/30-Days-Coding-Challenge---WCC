class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT32_MIN && divisor == -1)return INT32_MAX;
        if (divisor == INT32_MIN)
            return dividend == INT32_MIN ? 1 : 0;
        if (divisor == 1)return dividend;
        
		// subtract 1 temporarily, add back later
        bool isMin = false;
        if (dividend == INT32_MIN){
            isMin = true;
            dividend++;
        }
        int result = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        
        dividend = abs(dividend);
        divisor = abs(divisor);
        while (dividend >= divisor) {
            int tmp = divisor, k = 1;
			//note that tmp << 1 could be less than 0
            while (tmp << 1 > 0 && tmp << 1 <= dividend){
                tmp <<= 1;
                k <<= 1;
            }
            
            dividend -= tmp;
            result += k;
        }
        if (isMin){
            dividend++;
            while (dividend >= divisor){
                result++;
                dividend -= divisor;
            }
        }
        
        return sign == 1 ? result : -result;
    }
    
};