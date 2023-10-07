#include <iostream>
#include "List.h"

int main()
{
	LinkedList* list = new LinkedList();
	list->Append(10);
	list->PrintList();
	return 0;
}