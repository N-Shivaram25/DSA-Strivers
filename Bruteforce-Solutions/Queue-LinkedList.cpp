class MyQueue {
public:
    struct QueueNode {
        int data;
        QueueNode* next;
        QueueNode(int a) {
            data = a;
            next = NULL;
        }
    };
    
    QueueNode* head;
    
    MyQueue() {
        head = NULL;
    }


    void push(int x) {
        QueueNode* newNode = new QueueNode(x);
        newNode->next = head;
        head = newNode;
    }

    
    int pop() {
        if (head == NULL) return -1;  

        if (head->next == NULL) { 
            int val = head->data;
            delete head;
            head = NULL;
            return val;
        }

        QueueNode* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        int val = temp->next->data;
        delete temp->next;
        temp->next = NULL;
        return val;
    }
};
