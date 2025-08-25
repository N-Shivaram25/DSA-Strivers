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
    StackNode* head; 
    
  public:
    MyStack() {
        head = NULL;
    }

    
    void push(int x) {
        StackNode* newNode = new StackNode(x);
        if (head == NULL) {
            head = newNode;
            return;
        }
        StackNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }


    int pop() {
        if (head == NULL) return -1;  

        if (head->next == NULL) { 
            int val = head->data;
            delete head;
            head = NULL;
            return val;
        }

        StackNode* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        int val = temp->next->data;
        delete temp->next;
        temp->next = NULL;
        return val;
    }
};
