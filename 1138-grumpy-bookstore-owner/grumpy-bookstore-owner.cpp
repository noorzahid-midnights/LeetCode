class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int satisfied= 0;
        int gain;
        int extra = 0;
        int answer = 0;
        for(int i = 0; i < n; i++)
        {
            if (grumpy[i]== 0)
            {
                satisfied += customers[i]; 
            }

        }
        for (int i = 0; i <= n - minutes ; i++)
        {
            gain = 0;
            for (int j = i; j < i+minutes; j++)
            {
                
                if (grumpy[j] == 1)
                {
                    gain += customers[j];
                }
                
                
            }
            extra = max(extra, gain);
        }
    
        answer = extra+satisfied;
        return answer;
    }
};