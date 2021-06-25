class Solution
{
    public:
    
    static bool comparator(vector<int> &a, vector<int> &b){

        return a[1] < b[1];
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        
        vector<vector<int>> ans;
        
        for(int i = 0; i < n; i++){
            ans.push_back({start[i],end[i]});
        }
        
        sort(ans.begin(),ans.end(),comparator);
        
        int max_meeting = 1;
        int endm = ans[0][1];
        
        for(int i = 1; i < n; i++){
            
            if(ans[i][0] > endm){
                
                endm = ans[i][1];
                max_meeting++;
                
            }
        }
        
        return max_meeting;
        
    }
};

/*struct meeting{
        int start;
        int end;
        int pos;
    };
     static bool comparator(struct meeting m1,  meeting m2)
    {
        if(m1.end < m2.end) return true;
        else if(m1.end> m2.end) return false;
        else if(m1.pos<m2.pos) return true;
        else return true;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        struct meeting meet[n];
        for(int i=0;i<n;i++)
        {
            meet[i].start = start[i];
            meet[i].end = end[i];
            meet[i].pos = i+1;
        }
        sort(meet,meet+n,comparator);
        vector<int> answer;
        int limit = meet[0].end;
        answer.push_back(meet[0].pos);
        for(int i=1;i<n;i++)
        {
            if(meet[i].start>limit)
            {
                answer.push_back(meet[i].pos);
                limit = meet[i].end;
            }
        }
        return answer.size();
    }
    };
*/