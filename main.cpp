#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    Stack *s = new Stack();
    for(int i=0; i<10; i++) {
        s->push(i);
    }
    while(s->head != NULL) {
        cout << s->pop() << endl;
    }
}