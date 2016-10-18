/*******************************************************************************************
* Student: Vikram Singh StudentID: 11491025                                                *
* Class: CptS 122, Fall  2016; Lab Section 5                                               *
* Programming Assignment: Programming Assignment 8					                       *
* Date: Apirl 07, 2016                                                                     *
*******************************************************************************************/
#pragma once //gaurd code

//std libraries
#include <iostream>
#include <string>

//local libares
#include "Node.h"
#include "TransactionNode.h"

//namespaces
using namespace std;

class BST {
public:
	BST() { this->mpRoot = nullptr; }
	~BST() { this->destroyTree(this->mpRoot); }

	//setters
	void setPtrRootHead(Node* inputPtr) { this->mpRoot = mpRoot; }
	//getters
	Node* mPtrRootHead(void) { return this->mpRoot; }
	//insert function
	void insert (string inputData, int inputUnit){
		insert(this->mpRoot, inputData, inputUnit);
	}
	//inOrderTrav
	void inOrderTrav(void) { this->inOrderTrav(this->mpRoot); }
	//find smallest
	void findSmallest(void){ findSmallest(this->mpRoot); }
	void findlargest(void) { findlargest(this->mpRoot); }

private:
	Node* mpRoot; //root head

	void destroyTree(Node *& curNode);
	void insert(Node *& pCur, string inputData, int inputUnits);
	void inOrderTrav(Node *& pCur);
	void findSmallest(Node *& pCur);
	void findlargest(Node *& pCur);


};