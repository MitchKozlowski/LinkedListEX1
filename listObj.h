#ifndef LIST_OBJ
#define LIST_OBJ

#include <iostream>
#include <string>
using namespace std;

struct nodeType {
	string name;
	int age;
	nodeType * link;
};//end nodeType

class listObj {
public:
	bool isEmpty();
	bool isFull();
	void clear();
	void add(string nameIn, int ageIn);
	void display();

	listObj(); //default constructor
	listObj(string nameIn); //alternative constructor
	~listObj(); //destructor (only one)
	//etc.
private:
	nodeType * head;
}; //end class listObj

#endif
