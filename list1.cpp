/*
Class: CPSC 122-02 
Team Member 1: Tanner Franz 
Team Member 2: Paul DePalma
Submitted By: Tanner Franz 
GU Username: tfranz 
File Name:list1.cpp
Recursive FindR() function to find if an integer is in a list
To Build: g++ list1.cpp list1Tst.cpp
To Execute: ./a.out
*/ 

#include <iostream>
using namespace std;

#include "list1.h"

//	Tanner Franz Exam 3 Recursion Question	//

bool List::Find(itemType item)
	{
		node* cur = head;	
			return FindR(item, cur);
	}
	
bool List::FindR(itemType item, node* cur)
	{
		while(cur!= NULL)
			if(cur->item == item)
				{
					cur = NULL;
					delete cur;
					return true;
				}
			else
				{
					cur = cur->next;
					FindR(item, cur);
				}
		cur = NULL;
		delete cur;
		return false;
	}



List::List()
{
 head = NULL;
 length = 0;
}

List::~List()
{
 while (!IsEmpty())
 {
  DeleteItemH();
 }
}

bool List::IsEmpty() const
{
 if (length == 0)
  return true;
 return false;
}


int List::GetLength() const
{
 return length;
}

void List::PutItemH(const itemType newItem)
{
 node* tmp = new node;
 tmp->item = newItem;
 tmp->next = head;
 head = tmp;
 length++;
 tmp = NULL;
}

itemType List::GetItemH() const
{
 return head->item; 
}

void List::DeleteItemH()
{
 node* tmp = head->next;
 delete head;
 head = tmp;
 length--;
}
	
void List::Print() const
{
 node* tmp = head;
 while(tmp != NULL)
 {
  cout << tmp->item << endl;
  tmp = tmp->next;
 }
}
