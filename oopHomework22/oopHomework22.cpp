#include<iostream>
#include<vector>
#include<fstream>

using namespace std;
#include"applier.h"
#include"Company.h"



int main()
{
	Applier* cv1 = new Applier("Ceyhun", 18, "IT", "Empty1");
	Applier* cv2 = new Applier("Sebine", 17, "Designer", "Empty2");
	Applier* cv3 = new Applier("Leyla", 18, "Programmer", "Empty3");


	Company company;

	company.hireUp(cv1);
	company.hireUp(cv2);
	company.hireUp(cv3);

	//company.showAllCV();

	company.writeToFile("company.txt");

	company.readFromFile("company.txt");
	cout << endl << endl;
	company.showAllCV();
}
