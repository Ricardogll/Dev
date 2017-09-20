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

//struct node {
//	int data;
//	node* next;
//};
//
//class list {
//private:
//	node *first, *last;
//public:
//	list() { 
//		first = NULL; 
//		last = NULL; 
//	}
//
//	void createnode(int value) {
//		node*temp = new node;
//		temp->data = value;
//		temp->next = NULL;
//		if (first == NULL)
//		{
//			first = temp;
//			last = temp;
//			temp = NULL;
//		}
//		else {
//			first->next = temp;
//			last = temp;
//		}
//	}
//
//	void display() {
//		node *temp = new node;
//		temp = first;
//		while (temp != NULL) {
//			std::cout << temp->data << "\t";
//			temp = temp->next;
//		}
//	}
//	void instert_start(int value){
//		node *temp = new node;
//		temp->data = value;
//		temp->next = first;
//		first = temp;
//	}
//
//	void insert_position(int pos, int value) {
//		node *pre = new node;
//		node *cur = new node;
//		node *temp = new node;
//		cur = first;
//		for (int i = 1; i < pos; i++) {
//			pre = cur;
//			cur = cur->next;
//		}
//		temp->data = value;
//		pre->next = temp;
//		temp->next = cur;
//	}
//
//	void delete_first() {
//		node *temp = new node;
//		temp = first;
//		first = first->next;
//		delete temp;
//	}
//
//	void delete_last() {
//		node *current = new node;
//		node *previous = new node;
//		current = first;
//
//		while (current->next != NULL) {
//			previous = current;
//			current = current->next;
//
//		}
//		last = previous;
//		previous->next = NULL;
//		delete current;
//
//	}
//
//	void delete_position(int pos) {
//		node *current = new node;
//		node *previous = new node;
//		current = first;
//		for (int i = 1; i < pos; i++) {
//			previous = current;
//			current = current->next;
//
//		}
//		previous->next = current->next;
//	}
//
//	void list_to_array(int arr[], int alength) {
//		int size = 1;
//		node *temp = new node;
//		temp = first;
//		
//		while (temp->next != NULL) {
//			temp = temp->next;
//			size++;
//		 }
//		alength = size;
//		temp = first;
//		for (int i = 0; i < size; i++) {
//			arr[i] = temp->data;
//			temp = temp->next;
//		}
//		
//	}
//};
//
//
//int main() {
//	int length = 1;
//	int *array = new int[length];
//
//	
//
//
//	delete[] array;
//	array = NULL;
//
//	system("pause");
//	return  0;
//	
//}


int main() {



	system("pause");
	return 0;
}