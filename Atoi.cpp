class Solution {
public:
    int myAtoi(string str) {
       int i=0;
        int m = 1;
        // int INT_MIN = -2147483648;
        // int INT_MAX = 2147483647;
        long long int n = 0;
        while(str[i]==' ' && str[i]!='\0') ++i;
        if(str[i]=='-') {
            m = -1;
            ++i;
        }else if(str[i]=='+'){
            ++i;
        }
        while(str[i]>='0' && str[i]<='9'){
            n = (n<<3) + (n<<1) + (str[i]-'0');
            if(n*m<INT_MIN) return INT_MIN;
            if(n*m>INT_MAX) return INT_MAX;
            ++i;
        }
        return n*m;
    }
};
