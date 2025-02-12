#include "LinkedList.h"

LinkedList::LinkedList(int value)
{
	head = new Node(value);
	tail = head;
	length = 1;
}