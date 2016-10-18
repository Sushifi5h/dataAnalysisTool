/*******************************************************************************************
* Student: Vikram Singh StudentID: 11491025                                                *
* Class: CptS 122, Fall  2016; Lab Section 5                                               *
* Programming Assignment: Programming Assignment 8					                       *
* Date: Apirl 07, 2016                                                                     *
*******************************************************************************************/
#include "BST.h"

//destryo tree
void BST::destroyTree(Node *& curNode) {
	if (curNode != nullptr)
	{
		destroyTree(curNode->getLeftPtr());
		destroyTree(curNode->getRightPtr());
		delete curNode;
	}
}

//insert function
void BST::insert(Node *& pCur, string inputData, int inputUnits)
{
	TransactionNode* checkUnits = dynamic_cast<TransactionNode*>(pCur);

	if (pCur == nullptr)
	{
		Node *ptemp = new TransactionNode(inputData, inputUnits);
		pCur = ptemp;
	}
	else if (inputUnits > checkUnits->getMUnits())
	{
		insert(pCur->getRightPtr(), inputData, inputUnits);
	}
	else if (inputUnits < checkUnits->getMUnits())
	{
		insert(pCur->getLeftPtr(), inputData, inputUnits);
	}
}

//inorderTrav
void BST::inOrderTrav(Node *& pCur)
{
	if (pCur != nullptr)
	{
		inOrderTrav(pCur->getLeftPtr());
		dynamic_cast<TransactionNode*>(pCur)->printData();
		inOrderTrav(pCur->getRightPtr());
	}
}

//findSmallest
void BST::findSmallest(Node *& pCur)
{
	if (pCur->getLeftPtr() != nullptr)
	{
		findSmallest(pCur->getLeftPtr());
	}
	else {
		dynamic_cast<TransactionNode*>(pCur)->printData();
	}
}

//findSmallest
void BST::findlargest(Node *& pCur)
{
	if (pCur->getRightPtr() != nullptr)
	{
		findlargest(pCur->getRightPtr());
	}
	else {
		dynamic_cast<TransactionNode*>(pCur)->printData();
	}
}