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

//namespaces
using namespace std;
class TransactionNode :public Node {
public:
	//constructor
	TransactionNode(string inputUnits = "", int inputNumOfUnits = 0) : Node (inputUnits,nullptr,nullptr)
	{
		mUnits = inputNumOfUnits;
	}
	//destructor
	~TransactionNode()
	{
		//cout << "Destructor for transaction Node was called." << endl;
	}

	//setters
	void setmUnits(int inputmUnits) { this->mUnits = inputmUnits; }

	//getters
	int getMUnits(void) { return this->mUnits; }

	//overrides node print data
	void printData(void) 
	{
		cout << getMainData() << ": " << mUnits << endl;
	}
private:
	int mUnits;
};
