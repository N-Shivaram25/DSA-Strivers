#include <vector>
using namespace std;

class MyStack {
    vector<int> arr;

public:
    MyStack() {}

    void push(int x) {
        arr.push_back(x);
    }

    int pop() {
        if (arr.empty()) {
            return -1;
        }
        int val = arr.back();
        arr.pop_back();
        return val;
    }
};