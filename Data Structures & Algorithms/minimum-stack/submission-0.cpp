class MinStack {
public:
    stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> tmp;
        int min = INT_MAX; 
        while(st.size() != 0)
        {
            if(st.top() < min)
            {
                min = st.top();
            }
            tmp.push(st.top());
            st.pop();
        }
        
        while(tmp.size() != 0)
        {
            st.push(tmp.top());
            tmp.pop();
        }
        return min;
    }
};
