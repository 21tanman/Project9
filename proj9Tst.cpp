#include <iostream>
#include <cstring>
	
using namespace std;

#include "proj9.h"

int main()
	{
		doubleNode* tester = new doubleNode;
		List4* lst = new List4;
		lst->Insert(7, 0);
		lst->Insert(8,1);
		lst->Insert(9,2);
		lst->Insert(10,3);
		lst->Insert(6, 0);
		lst->PrintForward();
		lst->Delete(3);
		cout << "DELETED " << lst->DeleteItem(55) << "items" << endl;
		lst->PrintForward();
		tester = lst->Find(10);
		cout << "Tester found " << tester->item << endl;
		lst->PrintBackwards();
		return 0;
	}
		
