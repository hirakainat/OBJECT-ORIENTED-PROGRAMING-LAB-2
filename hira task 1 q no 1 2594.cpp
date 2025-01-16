#include<iostream>
#include<string>
using namespace std;
string* create_student_database(int num){
	string* database = new string[num];
	return database;
}

string name(string* student_database, int index, int num){
	if ((index >= 0) &&( index < num)){
		return student_database[index];
	}
	else{
		return 0;
	}
}
int main(){
	int num;
	cout << "enter the numbers of the students" << endl;
	cin >> num;
	string* student_database = create_student_database(num);
	for (int i = 0; i < num; i++){
		cout << "enter the name of the students" << i + 1 << endl;
		cin >> student_database[i];
	}
	int index;
	cout << "enter index" << endl;
	cin >> index;
	string studentname = name(student_database, index, num);
		if (studentname != ""){
			cout << "the name of the student at the index " << " " << index << "is" << studentname << endl;
		}
		else{
			cout << "invalid index" << endl;
		}
		delete[] student_database;
		return 0;
		system("pause");

		}
	