#pragma once


//need a linked list
template <class T>
class Node
{
public:
	Node(T* nData);
	~Node();


	T* getData();
	Node* getNext();


	void setData(T* nData);
	void setNext(Node& nNext);
	void test();

private:

	T* data;
	Node* next;
	

};




template <class T>
Node<T>::Node(T* nData)
{
	data = nData;
	mpNext = nullptr;
}


template <class T>
Node<T>::~Node()
{
	delete data;
}


template <class T>
T* Node<T>::getData()
{
	return data;
}

template <class T>
Node<T>* Node<T>::getNext()
{
	return next;
}




template <class T>
void Node<T>::setData(T* nData)
{
	data = nData;
}

template <class T>
void Node<T>::setNext(Node& nNext)
{
	next = nNext;
}

template<class T>
inline void Node<T>::test()
{
	return;
}




//////actual list



template <class T>
class List
{
public:
	List();
	~List();

	void enqueue(T* nData);
	T* dequeue();

	bool isEmpty();

	void setHead(Node<T>* nHead);
	void setTail(Node<T>* nTail);
	


private:

	Node<T>* head;
	Node<T>* tail;


};



template <class T>
List<T>::List()
{
	head = nullptr;
	tail = nullptr;
}

template <class T>
void List<T>::setHead(Node<T>* nHead)
{
	head = nHead;
}

template <class T>
void List<T>::setTail(Node<T>* nTail)
{
	tail = nTail;
}


template <class T>
bool List<T>::isEmpty()
{
	return (head == nullptr && tail = nullptr) ? true : false;	
}


