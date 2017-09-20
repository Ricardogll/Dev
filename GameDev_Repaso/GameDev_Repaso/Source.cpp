#include<iostream>



//class vec3 {
//private:
//	int x;
//	int y;
//	int z;
//
//public:
//	void setX(int ax) {
//		x = ax;
//	}
//
//	int retX() { return x; };
//};
//
//int main() {
//
//	int a = 0, b = 1, c = 2;
//	vec3 vec;
//	
//	vec.setX(a);
//	std::cout << vec.retX() << std::endl;
//	vec.setX(b);
//	std::cout << vec.retX() << std::endl;
//
//	system("pause");
//	return 0;
//}

//dyn array pag21 word

struct node {
	int data;
	node* next;
};

class list {
private:
	node *first, *last;
public:
	list() { 
		first = NULL; 
		last = NULL; 
	}

	void createnode(int value) {
		node*temp = new node;
		temp->data = value;
		temp->next = NULL;
		if (first == NULL)
		{
			first = temp;
			last = temp;
			temp = NULL;
		}
		else {
			first->next = temp;
			last = temp;
		}
	}

	void display() {
		node *temp = new node;
		temp = first;
		while (temp != NULL) {
			std::cout << temp->data << "\t";
			temp = temp->next;
		}
	}
	void instert_start(int value){
		node *temp = new node;
		temp->data = value;
		temp->next = first;
		first = temp;
	}
};
https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr

int main() {



	system("pause");
	return  0;
	
}