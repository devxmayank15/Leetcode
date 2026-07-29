class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int time=0;
        queue<pair<int,int>> q;

        for (int i=0; i<tickets.size(); i++)
            q.push({i, tickets[i]});
        
        while(!q.empty())
        {
            auto person= q.front();
            q.pop();

            person.second--;
            time++;

            if(person.first==k && person.second==0)
                return time;
            
            if(person.second > 0)
                q.push(person);

            

        }
        return time;

    }
};