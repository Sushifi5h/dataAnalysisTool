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

//namespaces
using namespace std;

//node for tree
class Node {
public://public access
	Node(string inputData = "", Node *left = nullptr, Node *right = nullptr)//constructor
	{
		this->mData = inputData;
		this->mpLeft = left;
		this->mpRight = right;
	}
	virtual ~Node()//destructor
	{
		//cout << "Destructor was called for node." << endl;
	}

	//setters
	void setMainData(string inputData) { this->mData = inputData; }
	void setLeftPtr(Node* inputLeftPtr) { this->mpLeft = inputLeftPtr; }
	void setRightPtr(Node* inputRightPtr) { this->mpRight = inputRightPtr; }

	//getters double back for returning for reference for lazy people like myself
	string getMainData(void) { return this->mData; }
	Node *& getLeftPtr(void) { return this->mpLeft; }
	Node *& getRightPtr(void) { return this->mpRight; }

	//pure virtual function
	virtual void printData(void) = 0;

protected://data members
	string mData;
	Node *mpLeft;
	Node *mpRight;
};

//class
