#define MAX 100

class MyStack {
    int arr[MAX];
    int top;

public:
    MyStack() {
        top = -1;
    }

    void push(int x) {
        if (top == MAX - 1) {
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop() {
        if (top == -1) {
            return -1;
        }
        int val = arr[top];
        top--;
        return val;
    }
};