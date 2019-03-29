#include <iostream>
#include <cstring>

using namespace std;
#include "proj9.h"


List4::List4()
	{
		length = 0;
		head = new doubleNode;
		tail = new doubleNode;
		head->prev = NULL;
		head->next = tail;
		tail->prev = head;
		tail->next = NULL;
	}

List4:: ~List4()
	{
		delete head;
		delete tail;
	}
doubleNode* List4::FindPosition(int pos)
	{
		doubleNode* cur = new doubleNode;
		cur = head;
		for (int i = 0; i < pos; i++)
			{
				cur = cur->next;
			}
		return cur;
	}

void List4::Insert (itemType item, int pos)
	{
		doubleNode* cur = new doubleNode;
		cur->item = item;
		doubleNode* pre = new doubleNode;
		doubleNode* post = new doubleNode;
		if(pos == 0&&length == 0)
			{
				head->next = cur;
				cur->prev = head;
				cur->next = tail;
				tail->prev = cur;
				length++;
				return;
			}
		if(pos == 0)
				{
					head->next->prev = cur;
					cur->next = head->next;
					cur->prev = head;
					head->next = cur;
					length++;
					return;
				}
			if(pos == length)
				{
					cout << "end of string" << endl;
					pre = FindPosition(pos);
					cur->next = tail;
					cur->prev = pre;
					pre->next = cur;
					tail->prev = cur;
					length++;
					return;
				}
				
			
		
		post = FindPosition(pos);
		pre = FindPosition(pos-1);
		pre-> next = cur;
		post-> prev = cur;
		cur-> next = post;
		cur-> prev = pre;
		length++;
		return;
	}

void List4::PrintForward()
	{
		doubleNode* print = new doubleNode;
		print = head->next;
		while (print->next != NULL)
			{
				cout << "Item " << print->item <<endl;
				print = print->next;
			}
		delete print;
		return;
	}

void List4::PrintBackwards()
	{
		doubleNode* test = new doubleNode;
		test = tail->prev;
		for (int i = 0; i < length; i++)
			{
				cout << "Bitem " << test->item << endl;
				test = test->prev;
			}
		return;
	}
		
		

						
