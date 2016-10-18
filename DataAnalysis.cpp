/*******************************************************************************************
* Student: Vikram Singh StudentID: 11491025                                                *
* Class: CptS 122, Fall  2016; Lab Section 5                                               *
* Programming Assignment: Programming Assignment 8					                       *
* Date: Apirl 07, 2016                                                                     *
*******************************************************************************************/
#include "DataAnalysis.h"

void DataAnalysis::readInFromLine(string inputString) {

	istringstream ss(inputString);
	string units = "", unitName = "", transaction = "", token = "";


	while (getline(ss, token, ','))
	{
		if (units == "")
		{
			units = token;
		}
		else if (unitName == "")
		{
			unitName = token;
		}
		else if (transaction == "")
		{
			transaction = token;
		}
	}
	
	if (transaction == "Purchased")
	{
		this->mTreePurchased.insert(unitName, atoi(units.c_str()));
	}
	else {
		this->mTreeSold.insert(unitName, atoi(units.c_str()));
	}
}

void DataAnalysis::getLinesFromFile(void)
{
	string empty = "";

	while (getline(this->mCsvStream, empty))
	{	
		if (empty.find("Units") == std::string::npos)
		{
			readInFromLine(empty);
		}
		empty = "";
	}
}