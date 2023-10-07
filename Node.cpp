#include "Node.h"
#include <iostream>

Node::Node() {
	this->next = nullptr;
	this->data = 0;
}
Node::~Node()
{
	std::cout << "Deleting next" << std::endl;
	if (this->next != nullptr)
	{
		delete this->next;
		this->next = nullptr;
	}
}