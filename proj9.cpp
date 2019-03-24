#include <iostream>
#include <cstring>

using namespace std;
#include "proj9.h"


List4::List4()
	{
		head = nullptr;
		tail = nullptr;
	}

List4:: ~List4()
	{
//LEARN DESTRUCTOR
	}
doubleNode* FindPosition(int pos)
	{
		doubleNode* cur = new node;
		cur->next = head;
		for (int i = 0; i< pos; i++)
			{
				cur = cur->next;
			}
		return cur;
	}

void Insert (itemType item, int pos)
	{
		doubleNode* cur = new node;
		cur->next = FindPosition(pos);
		cur-> prev = 
		 
						
