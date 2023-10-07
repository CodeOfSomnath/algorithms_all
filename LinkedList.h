#pragma once

#include "Node.h"

class LinkedList
{
public:
	Node* head;
	Node* tail;
	LinkedList();
	~LinkedList();
	void Append(int item);
	void PrintList();
};

