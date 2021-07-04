class Solution{
    public:
        /*You are required to complete this method */
    int atoi(string str)
    {
        //Your code here
        int i=0 ,flag = 1;
        if(str[0]=='-')
        {
            i = 1;
            flag = -1;
        }
        
        int res = 0;
       while(str[i]!='\0')
         {
             if((str[i]>='0' && str[i]<='9'))
             res = res * 10 + str[i++] - '0';
             else
               return -1; 
                
                
         
         }
    // return result.
    return res*flag;
    }
};