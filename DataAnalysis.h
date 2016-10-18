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
#include <fstream>
#include <sstream>

//local libares
#include "Node.h"
#include "TransactionNode.h"
#include "BST.h"

//namespaces
using namespace std;

class DataAnalysis {
public:
	DataAnalysis() { this->mCsvStream.open("data.csv"); }
	~DataAnalysis() { this->mCsvStream.close(); }
	void runAnalysis()
	{
		getLinesFromFile();
		
		mostSold();
		mostPurchased();

		cout << endl << endl << "Units Sold in Order: " << endl;
		mTreeSold.inOrderTrav();
		cout << endl << endl << "Units Purchased in Order: " << endl;
		mTreePurchased.inOrderTrav();

	}
private:
	BST mTreeSold;
	BST mTreePurchased;
	ifstream mCsvStream;

	//open file
	void openFile(void)
	{
		this->mCsvStream.open("data.csv");
	}
	void getLinesFromFile(void);
	void readInFromLine(string inputString); //splits lines input is line
	void mostPurchased(void) {
		cout << "Most Purchased product was ";
		mTreePurchased.findlargest();
		cout << "Least Purchased product was ";
		mTreePurchased.findSmallest();
	}
	void mostSold(void) {
		cout << "Most Purchased product was ";
		mTreeSold.findlargest();
		cout << "Least Purchased product was ";
		mTreeSold.findSmallest();
	}
};