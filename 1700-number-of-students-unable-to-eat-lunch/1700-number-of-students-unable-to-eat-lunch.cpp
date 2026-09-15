class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int count=0,sand=0;
        for(int student:students)
        {
            q.push(student);
        }
        while(!q.empty( )&& count<q.size())
        {
            if(q.front()==sandwiches[sand])
            {
                q.pop();
                sand++;

                count=0;
            }
            else{
               q.push(q.front());
               q.pop();
               count++;

            }
        }
        return q.size();
    }
};