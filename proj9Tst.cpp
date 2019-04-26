#include <iostream>
#include <cstring>
	
using namespace std;

#include "proj9.h"

int main()
	{
		doubleNode* tester = new doubleNode;
		List4* lst = new List4;
		lst->Insert(7, 0);
		lst->Insert(2,1);
		lst->Insert(55,2);
		lst->Insert(10,3);
		lst->Insert(6, 4);
		
		cout << endl;		

		lst->PrintForward();
cout << endl;
		//lst->Delete(10);	
		cout << "pre sort()" << endl;
		lst->Sort();
		lst->PrintForward();
		cout << endl;
		tester = lst->Find(55);
		cout << "Tester found " << tester->item << endl;
		lst->PrintBackwards();
		
		return 0;
	}
		
