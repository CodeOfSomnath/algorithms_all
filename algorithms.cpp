#include <iostream>
#include "List.h"

int main()
{
	LinkedList* list = new LinkedList();
	list->Append(10);
	list->Append(100);
	list->Append(50);
	list->PrintList();

	delete list;
	return 0;
}