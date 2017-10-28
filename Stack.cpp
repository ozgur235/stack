#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack() {
    head = NULL;
}

void Stack::push(int id) {
    node *temp = new node;
    temp->id = id;
    temp->next = head;
    head = temp;
}

int Stack::pop() {
    node *temp = head;
    head = head->next;
    int id = temp->id;
    delete temp;
    return id;
}