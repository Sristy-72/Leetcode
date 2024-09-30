class CustomStack {
public:
vector<int>st;
vector<int>increments;
int n;
    CustomStack(int maxSize) {
         n=maxSize;
    }
    
    void push(int x) {
        if(st.size()<n){
        st.push_back(x);
        increments.push_back(0);
       }
    }
    
    int pop() {
       if(st.size()==0){
        return -1;
       }
       int size=st.size()-1;
       
        if(size > 0) {
            increments[size-1] += increments[size];
        }

        int top_val = st[size] + increments[size];
        st.pop_back();
        increments.pop_back();
        
        return top_val;
    }
    
    void increment(int k, int val) {
        int check=min(k,(int)st.size())-1;// check if size is less than k then increament all the element in the stack
      
        if(check>=0){
            increments[check]=increments[check]+val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */