#pragma once

template<typename T>
struct TNode {
	T val;
	TNode* next;
	TNode(const T& _val = T(), TNode* _next = nullptr) :val(_val), next(_next) {};
};