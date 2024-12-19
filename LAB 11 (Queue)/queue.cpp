#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void inqueue() {
    int val;
    if (rear == n - 1) {
        cout << "Queue Overflow" << endl;
        return;
    } else {
        cout << "Insert the element in queue: ";
        cin >> val;
        if (front == -1) front = 0;  // Set front to 0 for the first insertion
        rear++;
        queue[rear] = val;
        cout << "Element inserted: " << val << endl;
    }
}

void dequeue() {
    if (rear == -1) {
        cout << "Queue Underflow" << endl;
        return;
    } else {
        cout << "Element deleted from queue is: " << queue[front] << endl;
        front++;  // Decrement rear to remove the last element
        if (rear < front) {  // Reset the queue when empty
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if (front == -1 || rear < front) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int ch;
    cout << "1) Insert element to queue\n"
         << "2) Delete element from queue (from the back)\n"
         << "3) Display all the elements of queue\n"
         << "4) Exit\n";

    while (true) {
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                inqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;  // End program
            default:
                cout << "Invalid choice, please try again." << endl;
                break;
        }
    }
}

