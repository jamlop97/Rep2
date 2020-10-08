#pragma once

#include<iostream>

class List
{ 
private:

	typedef struct node {
		node* next;
		int data;
	}*nodePtr;

	//typedef node* nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr temp;

public:
	List();
	void addNode(int addData);
	void delNode(int delData);
	void Reverse();
	void printList();


};