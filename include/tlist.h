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


	/*size_t next(size_t i) {
		return (i + 1) % n;
	}

	TQueue() : n(100), s(0), f(n - 1) {
		mem = new T[n];
	}

	TQueue(size_t _n) {
		n = _n;
		mem = new T[n];
		s = 0;
		f = n - 1;
	}

	TQueue(const TQueue& queue) {
		n = queue.n;
		s = queue.s;
		f = queue.f;
		mem = new T[n];
		for (size_t i = s; i != next(f); i = next(i)) {
			mem[i] = queue.mem[i];
		}
	}
	~TQueue() {
		delete[] mem;
	}

	bool isEmpty() {
		return s == next(f);
	}

	bool isFull() {
		return s == next(next(f));
	}

	void push(T elem) {
		if (isFull()) throw "Queue is full";
		f = next(f);
		mem[f] = elem;
	}

	T pop() {
		if (isEmpty()) throw "Empty queue";
		T res = mem[s];
		s = next(s);
		return res;
	}

	TQueue& operator=(const TQueue& queue) {
		if (this == &queue) return *this;
		n = queue.n;
		s = queue.s;
		f = queue.f;
		delete[] mem;
		mem = new T[n];
		if (f < s) {
			for (size_t i = s; i < n; i++) {
				mem[i] = queue.mem[i];
			}
			for (size_t i = 0; i <= f; i++) {
				mem[i] = queue.mem[i];
			}
		}
		else {
			for (size_t i = s; i <= f; i++) {
				mem[i] = queue.mem[i];
			}
		}
		return *this;
	}*/


};