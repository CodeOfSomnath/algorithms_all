#include "Node.h"

Node::Node() {
	this->next = nullptr;
	this->data = 0;
}
Node::~Node()
{
	delete next;
}