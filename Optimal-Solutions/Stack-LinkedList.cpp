class MyStack {
  private:
    struct StackNode {
        int data;
        StackNode* next;
        StackNode(int x) {
            data = x;
            next = NULL;
        }
    };
    StackNode* top;  
    
  public:
    MyStack() {
        top = NULL;
    }

    void push(int x) {
        StackNode* newNode = new StackNode(x);
        newNode->next = top;
        top = newNode;
    }

   
    int pop() {
        if (top == NULL) return -1; 
        int val = top->data;
        StackNode* temp = top;
        top = top->next;
        delete temp;
        return val;
    }
};
