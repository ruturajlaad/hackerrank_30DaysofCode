class Solution {
    //Write your code here
    private:
    stack<char>st;
    queue<char>q;
    
    public:
    
    void pushCharacter(char ch){
        st.push(ch);
    }
    void enqueueCharacter(char ch){
        q.push(ch);
    }
    
    char popCharacter(){
        char ch;
        ch=st.top();
        st.pop();
        
        return ch;
        }
    
    char dequeueCharacter(){
        char ch = q.front();
        q.pop();
        return ch;
    }
        
};
