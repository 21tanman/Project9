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
		head->item = -1;
		tail->item = '\0';
	}


List4:: ~List4()
	{
		doubleNode* trecker = new doubleNode;
		
		for(int i = 0; i < length; i++)
			{
				trecker = head;
				trecker = trecker->next;
				head->next = trecker->next;
				delete trecker;
				trecker = nullptr;
			}
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
		cout << "FORWARDS PRINT" << endl;
		doubleNode* print = new doubleNode;
		print = head->next;
		for(int i = 0; i<length; i++)
			{
				cout << print->item <<endl;
				print = print->next;
			}
		delete print;
		return;
	}


void List4::PrintBackwards()
	{
		cout << "\nBACKWARDS PRINT" << endl;
		doubleNode* print = new doubleNode;
		for(int i = 0; i < length; i++)
			{
				print = FindPosition(length -i);
				cout << print->item << endl;
			}
			cout << endl;
		delete print;
		return;
	}

	
void List4::Delete (int pos)
	{
		if(pos >length|| pos < 0)
			{
				cout << "Invalid Position" << endl;
				return;
			}	
		doubleNode* cur = FindPosition(pos);
		cur->next->prev = cur->prev;
		cur->prev->next = cur->next;
		delete cur;
		length--;
	}


int List4::DeleteItem (itemType item)
	{
		cout << "\n -DELETING- " << item << endl << endl;
		int deletions = 0;
		doubleNode* cur = new doubleNode;
		cur->next = head->next;
		while(cur->next != NULL)
			{
				cur = cur->next;
				if(cur->item == item)
					{
						cur->prev->next = cur->next;
						cur->next->prev = cur-> prev;
						delete cur;
						length--;
						deletions++;
					}
				}
		return deletions;
	}


doubleNode* List4::Find(itemType item)
	{
		doubleNode* cur = new doubleNode;
		cur = head;
		for(int i = 0; i < length; i++)
			{
				cur= cur->next;
				if(cur->item == item)
					return cur;
			}
		return head;
	}


//EXTRA CREDIT
void List4::Sort()
	{
		cout << " \n -SORTING- \n \n";
		doubleNode* cur = new doubleNode;	  //greater value
		doubleNode* pre  = new doubleNode;
		doubleNode* post = new doubleNode;	// smaller value
		for(int i = 1; i < length; i++)
			{
				cur = FindPosition(length-i);
				while(cur->next->item != '\0'&& cur->item > cur->next->item)
					{
						pre = cur->prev;
						post = cur->next;
					 	pre->next = post; 
						post->prev = cur->prev;												
						post->next->prev = cur;
						cur->prev = post;
						cur->next = post->next;
													post->next = cur;
					}
			}
	return;
	}
					
			
		

						
