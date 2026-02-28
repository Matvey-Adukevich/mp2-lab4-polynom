#pragma once
//#include "tlist.h"
#include "tnode.h"
#include <stdexcept>

//template<typename T> struct TNode;
//template<typename T>
//struct TNode {
//    T val;
//    TNode* next;
//    TNode(const T& _val = T(), TNode* _next = nullptr) :val(_val), next(_next) {};
//};

template<typename T>
class TIterator{
    TNode<T>* t;
public:
    TIterator(TNode<T>* _t):t(_t){};
    bool HasNext(){return t != nullptr;}
    T& Next(){
        if(!HasNext()) throw std::out_of_range("no next elem");
        T& current = t->val;
        t = t->next;
        return current;
    }
};

