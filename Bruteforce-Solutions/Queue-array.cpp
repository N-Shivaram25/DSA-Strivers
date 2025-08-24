geeksforgeeks
Tutorials
Courses
Go Premium
R

Search...



Upgrade to Premium for Doubt Support across all your problems and courses.

Explore Premium
Redirection Icon
Refresh

Time (IST)	Status	Marks	Lang	Test Cases	Code
2025-08-24 22:34:32	Correct	
0Info
cpp	170 / 170	View
2025-08-24 22:33:12	Correct	
1
cpp	170 / 170	View
2025-08-24 22:31:46	Compilation Error	
0
cpp	0 / 170	View
2025-08-24 22:29:46	Time Limit Exceeded	
0
cpp	100 / 170	View
C++ (12)



    return val;
}



Custom Input
/*

The structure of the class is
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */


void MyQueue::push(int x) {
    arr[rear] = x;               
    rear = (rear + 1) % 100005;  
}


int MyQueue::pop() {
    if (front == rear) {  
        return -1;
    }
    int val = arr[front];  
    front = (front + 1) % 100005; 
    return val;
}