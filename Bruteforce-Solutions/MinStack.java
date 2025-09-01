import java.util.Stack;

class MinStack {
    private Stack<Integer> stack;   // only one stack

    public MinStack() {
        stack = new Stack<>();
    }

    public void push(int val) {
        stack.push(val);  // O(1)
    }

    public void pop() {
        if (!stack.isEmpty()) {
            stack.pop();   // O(1)
        }
    }

    public int top() {
        return stack.peek();  // O(1)
    }

    public int getMin() {
        // Brute force: scan whole stack
        int min = Integer.MAX_VALUE;
        for (int num : stack) {
            if (num < min) {
                min = num;
            }
        }
        return min;  // O(n)
    }
}
