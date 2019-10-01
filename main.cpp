#include "title.h"
#include <iostream>
using namespace std;

template< class type >
void printtwice(type data)
{
	cout << "g: " << data * 2 << endl;
}

int main(){
	LV a(5, 2, 3, 4);
	LV b(1,2,3,4);
	((a+b)*2).print();
	a.read();
	a.print();
	printtwice(2);
	return 0;
}
