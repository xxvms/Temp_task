//
// Created by tombr on 15/08/2017.
//

#ifndef TEMP_TASK_STACK_H
#define TEMP_TASK_STACK_H

#include <vector>

template <class Type>
class Stack
{
private:
    std::vector<Type>v1;          // stack array of any type
public:
    //Stack();                    // constructor
    void push(Type&& var);        // put number on stack
    Type pop();
};


/*
template <class Type>
Stack<Type>Stack(){}
*/

template <class Type>
void Stack<Type>::push(Type&& var) {
    v1.push_back(std::move(var));
}
template <class Type>
Type Stack<Type>::pop() {
    Type temp = v1.back();
    v1.pop_back();
    return temp;
}

#endif //TEMP_TASK_STACK_H
