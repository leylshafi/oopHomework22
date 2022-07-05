#pragma once
class Company {
	vector<Applier*> appliers;

public:
	void hireUp(Applier* cv)
	{
		appliers.push_back(cv);
	}

	void showAllCV()
	{
		for (size_t i = 0; i < appliers.size(); i++)
		{
			appliers[i]->CV();
		}
	}


	void writeToFile(string filename)
	{
		ofstream f(filename, ios::app);
		if (!f)
			throw new exception("File can not created");

		if (!f.is_open()) {
			f.close();
			throw new exception("File can not opened");
		}

		for (size_t i = 0; i < appliers.size(); i++)
		{
			f << appliers[i]->getName() << ' ' << appliers[i]->getAge() << ' ' << appliers[i]->getSpeciality() << ' ' << appliers[i]->getText() << ' ';

		}
		f.close();
	}


	void readFromFile(string filename)
	{
		ifstream f(filename, ios::app);
		if (!f)
			throw new exception("File can not created");

		if (!f.is_open()) {
			f.close();
			throw new exception("File can not opened");
		}

		while (!f.eof())
		{
			Applier a;
			for (size_t i = 0; i < appliers.size(); i++)
			{
				f >> a.getName();
				f >> a.getAge();
				f >> a.getSpeciality();
				f >> a.getText();

				a.CV();
			}

			if (f.peek() != 10)
				break;
		}
		f.close();
	}
};