#include <iostream>
#include <cstring>
	
using namespace std;

#include "proj9.h"

int main()
	{
		List4* lst = new List4;
		lst->Insert(7, 0);
		lst->Insert(8,1);
		lst->Insert(9,2);
		lst->Insert(10,3);
		lst->Insert(6, 0);
		lst->PrintForward();
		lst->PrintBackwards();
		return 0;
	}
		
