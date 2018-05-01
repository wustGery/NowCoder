class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        while(!stack1.empty()){
            int val=stack1.top();
            stack1.pop();
            stack2.push(val);
        }
        int ans=stack2.top();
        stack2.pop();
        while(!stack2.empty()){
            int val=stack2.top();
            stack2.pop();
            stack1.push(val);
        }
        return ans;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
