#include <iostream>
#include <cstring>
	
using namespace std;

#include "proj9.h"

int main()
	{
		doubleNode* tester = new doubleNode;
		List4* lst = new List4;
		for(int i = 1; i <= 5; i++)
			lst->Insert(i, i);
				
		lst->Insert(6, 6);
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
		
