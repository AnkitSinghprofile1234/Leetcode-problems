class MinStack {
public:
    stack<pair<int , int>> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val, val});
        } else {
            int minVal = min(val, s.top().second);  // ✅ 'minVal' same variable use
            s.push({val, minVal});                  // ✅ spelling fix
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;  // ✅ fixed: 'retutn' → 'return', 's.top.second' → 's.top().second'
    }
};
