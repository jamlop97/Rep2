#include<iostream>
#include"List.h"

List::List() {
	curr = NULL;
	head = NULL;
	temp = NULL;
}

void List::addNode(int addData) {

	temp = new struct node;

	if (head == NULL) {
		head = temp;
	}
	else
	{
		curr = head;

		while (curr->next != NULL)
		{
			curr = curr->next;
		}

		curr->next = temp;
	}

	temp->data = addData;
	temp->next = NULL;
}


void List::delNode(int delData) {
	curr = head;
	while ((curr->next != NULL) && (curr->data != delData)) {
		temp = curr;
		curr = curr->next;
	}

	if (curr->data == delData) {
		if (curr == head)
		{
			head = curr->next;
			delete curr;
		}
		else
		{
			temp->next = curr->next;
			delete curr;
		}
	}

	else {
		std::cout << "The data value was not found." << std::endl;
	}
}


void List::Reverse() {
	curr = head;
	temp = curr->next;
	curr->next = NULL;
	nodePtr temp2;

	while (temp != NULL)
	{
		temp2 = temp->next;
		temp->next = curr;

		curr = temp;
		temp = temp2;
	}

	head = curr;

}


void List::printList() {
	curr = head;
	while (curr != NULL)
	{
		std::cout << curr->data;
		curr = curr->next;

		if (curr != NULL)
		{
			std::cout << ",";
		}

	}
	std::cout << std::endl;
}

