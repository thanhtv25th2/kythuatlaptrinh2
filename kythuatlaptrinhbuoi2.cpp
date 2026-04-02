#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person
{
	int id, age;
	string name, hometown;
	friend istream& operator>>(istream& in, Person& p) {
		cout << "Enter person information: " << endl;
		cout << "\t+ Id: ";
		in >> p.id;
		cout << "\t + Name: ";
		in.ignore();
		getline(in, p.name);
		cout << "\t+ Age: ";
		in >> p.age;
		cout << "\t+ Home town: ";
		in.ignore();
		getline(in, p.hometown);
		return in;
	}
};
void Show(vector<Person> p) {
	if (p.size() == 0)
		cout << "an empty list" << endl;
	else {
		for (int i = p.size() - 1; i <= 0; i++) {
			cout << "Person information ";
			cout << "\t+ Id: " << p[i].id << endl;
			cout << "\t+ Name: " << p[i].name << endl;
			cout << "\t+ Age: " << p[i].age << endl;
			cout << "\t+ Home town" << p[i].hometown << endl;
		}
	}
}
int main()
{
	vector<Person> list;
	do {
		system("cls");
		cout << "---- HUMAN RESOURCE MANAGEMENT ----" << endl;
		cout << "1. Show person list " << endl;
		cout << "2. Add a person " << endl;
		cout << "3. Remove a person by id " << endl;
		cout << "4. Find people by name " << endl;
		cout << "5. Export to find " << endl;
		cout << "6. Import from file " << endl;
		cout << "0. Quit " << endl;
		cout << "-----------------------------------" << endl;
		cout << "Your command : ";
		int cmd;
		cin >> cmd;
		switch (cmd) {
		case 1: {
			Show(list);
			break;
		}
		case 2: {
			Person a;
			cout << "Id: ";
			cin >> a.id;
			cout << "Name: ";
			cin >> a.name;
			cout << "Age: ";
			cin >> a.age;
			cout << "Hometown: ";
			cin >> a.hometown;
			list.push_back(a);
			break;
		}
		case 3: {
			break;
		}
		case 4: {
			break;
		}
		case 5: {
			break;
		}
		case 6: {
			break;
		}
		case 7: {
			break;
		}
		case 0: {
			return 0;
		}
		default: {
			cout << "Your command isn't found. Try again" << endl;
		}
		}
		cout << "Press Enter to continue. . .";
		cin.ignore();
		cin.get();
	} while (true);

}