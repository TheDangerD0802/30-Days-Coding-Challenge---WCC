class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
                return "1";
        if(n==2)
                return "11";
        string str = "11";
        for (int i = 3; i <= n; i++) {
                string temp="";
                int size = str.length();
                int cnt=1;
                int flag = 0;
                for(int j=1;j<size;j++)
                {
                        if(str[j]!=str[j-1])
                        {
                                temp+='0'+cnt;
                                temp+=str[j-1];
                                cnt=1;
                        }
                        else
                        {
                                cnt++;
                        }
                }
                temp+='0'+cnt;
                temp+=str[size-1];

                str = temp;
        }
        return str;
    }
};