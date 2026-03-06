#pragma once
#include <stdexcept>
#include "titerator.h"
#include "tnode.h"

//template<typename T>
//struct TNode {
//	T val;
//	TNode* next;
//	TNode(const T& _val = T(), TNode* _next = nullptr) :val(_val), next(_next) {};
//};

template<typename T>
class TList
{
	TNode<T>* fp;
	TNode<T>* lp;
public:
	TList() :fp(nullptr), lp(nullptr) {};

	void delFirst() {
		if (fp == nullptr) throw std::out_of_range("empty list");
		TNode<T>* temp = fp;
		fp = fp->next;
		if (fp == nullptr) lp = nullptr;
		delete temp;
	}
	void Clean() {
		while (fp != nullptr) {
			delFirst();
		}
		lp = nullptr;
	}

	void Sort() {
		bool fl = false;
		if (fp == nullptr) throw std::out_of_range("emply list(sort)");
		if (fp->next == nullptr) return;
		while (!fl) {
			fl = true;
			TNode<T>* tmp = fp;
			while (tmp->next != nullptr) {
				if (tmp->val > tmp->next->val) {
					fl = false;
					T tmp1 = tmp->val;
					tmp->val = tmp->next->val;
					tmp->next->val = tmp1;
				}
				tmp = tmp->next;
			}
		}
	}

	void InsertBefore(TNode<T>* nextNode, const T& val, TNode<T>* prevNode) {
		TNode<T>* newNode = new TNode<T>(val, nextNode);

		if (prevNode == nullptr) {
			fp = newNode;
		}
		else {
			prevNode->next = newNode;
		}
	}

private:
	TNode<T>* AddAfter(TNode<T>* p, const T& val) {
		TNode<T>* temp = new TNode<T>(val, p->next);
		p->next = temp;
		return temp;
	}

public:
	void AddFirst(const T& val) {
		fp = new TNode<T>(val, fp);
		if (lp == nullptr) {
			lp = fp;
		}
		//AddAfter(fp, val);
	}

	void AddLast(const T& val) {
		if (fp == nullptr) {
			fp = new TNode<T>(val, nullptr);
			lp = fp;
		}
		else {
			lp = AddAfter(lp, val);
		}
	}

	TNode<T>* GetFP() {
		return fp;
	}

	/*TIterator<T> iterator() {
		return TIterator<T>(fp);
	}*/

	~TList() {
		Clean();
	}
};