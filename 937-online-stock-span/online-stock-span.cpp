class StockSpanner {
public:
    stack<pair<int,int> >st;
    int day=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        day++;
        while(!st.empty() && st.top().first<=price){
            st.pop();
        }
        int span;
        if(st.empty()){
            span=day;
        }
        else{
            span=day-st.top().second;
        }
        st.push({price,day});
        return span;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */