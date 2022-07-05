#pragma once
class Applier {
	string name = "";
	int age = 0;
	string speciality = "";
	string text = "";
public:
	Applier() = default;
	Applier(string name, int age, string speciality, string text)
		:name(name), age(age), speciality(speciality), text(text)
	{}

	string& getName() { return name; }
	int& getAge() { return age; }
	string& getSpeciality() { return speciality; }
	string& getText() { return text; }

	void CV()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Speciality: " << speciality << endl;
		cout << "Text: " << text << endl;
		cout << endl;
	}
};

