#ifndef STACK_H
#define STACK_H

struct node {
    node *next;
    int id;
};

class Stack {
    public:
        node *head;
        Stack();
        void push(int id);
        int pop();
};

#endif