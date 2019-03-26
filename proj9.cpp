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
		delete head;
		delete tail;
	}
doubleNode* FindPosition(int pos)
	{
		doubleNode* cur = new node;
		cur = head;
		for (int i = 0; i < pos; i++)
			{
				cur = cur->next;
			}
		return cur;
	}

void Insert (itemType item, int pos)
	{
		
		doubleNode* cur = new node;
		doubleNode* pre = new node;
		doubleNode* post = new node;
		post = FindPosition(pos);
		pre = FindPosition(pos-1)
		pre-> next = cur;
		post-> prev = cur;
		cur-> item = item;
		cur-> next = post;
		cur-> prev = pre;
		length++;
	}
						
