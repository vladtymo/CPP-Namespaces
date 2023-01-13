#include "Header.h"

int StudentRes::id = 0;
int TeacherRes::id = 1000;
int StudentRes::avgMark = 0;

void StudentRes::StudentInfo::Show() const
{
	cout << "Student...\n";
	cout << "ID: " << this->id << endl;
	cout << "Next ID: " << StudentRes::id << endl;
}

void TeacherRes::TeacherInfo::Show() const
{
	cout << "Teacher...\n";
	cout << "ID: " << this->id << endl;
	cout << "Next ID: " << TeacherRes::id << endl;
}

void Frog::Say() { cout << "Kva-kva...\n"; }
void Frog::Move() { cout << "Jump-jump...\n"; }

void Duck::Say() { cout << "Krya-krya...\n"; }
void Duck::Move() { cout << "Swim...\n"; }