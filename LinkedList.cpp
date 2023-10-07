#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList()
{
	this->head = nullptr;
	this->tail = nullptr;
}

LinkedList::~LinkedList()
{
	delete head;
	//delete tail;
	if (this->tail != nullptr)
	{
		delete this->tail;
	}
}




void LinkedList::Append(int item)
{
	if (this->head == nullptr)
	{
		this->head = new Node();
		this->head->data = item;
		this->head->next = new Node();
		this->tail = this->head->next;
	}
	else {
		this->tail->data = item;
		this->tail->next = new Node();
		this->tail = this->tail->next;
	}
}

void LinkedList::PrintList()
{
	Node* temp = this->head;
	while (temp->next != nullptr)
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}
}
