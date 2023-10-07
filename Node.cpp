#include "Node.h"

Node::Node() {
	this->next = nullptr;
	this->data = 0;
}
Node::~Node()
{
	if (this->next != nullptr)
	{
		delete this->next;
		this->next = nullptr;
	}
}