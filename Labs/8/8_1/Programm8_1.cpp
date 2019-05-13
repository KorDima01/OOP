#include <iostream>
#include <vector>
#include <string>
using namespace std;

class group
{
	string code;
	vector<string> names;
public:
	group();
	int find(vector<string>, string);
	void addName(string);
	void removeName(string);
	void getNames();
	void setCode(string);
	string getCode();
	~group();
};

group::group()
{
}
int group::find(vector<string> v, string item) {
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == item) return i;
	}
	return -1;
}
void group::addName(string name) {
	names.push_back(name);
}
void group::removeName(string name) {
	int status = find(names, name);
	if (status >= 0)
		names.erase(names.begin() + status);
	else
		cout << "Student name is missing.\n";
}
void group::getNames() {
	for (int i = 0; i < names.size(); i++)
	{
		cout << i + 1 << ": " << names[i] << endl;
	}
}
void group::setCode(string code) {
	this->code = code;
}
string group::getCode() {
	return code;
}

group::~group()
{
}


int main()
{
	group group1;
	string name, code;

	cout << "Enter group code: " << endl;
	getline(cin, code);
	group1.setCode(code);
	cout << "Enter name" << endl;
	getline(cin, name);
	group1.addName(name);
	cout << "Enter second name" << endl;
	getline(cin, name);
	group1.addName(name);
	cout << "Composition of the group:\n";
	group1.getNames();

	cout << "Enter name:" << endl;
	getline(cin, name);
	group1.removeName(name);

	cout << "Composition of the group:\n";
	group1.getNames();

	cout << "Group code: " << group1.getCode() << endl;

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
