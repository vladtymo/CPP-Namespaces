#include "Header.h"

using namespace TeacherRes;		// підключення всіх членів з простору імені
//using namespace StudentRes;

using namespace Frog;
using namespace Duck;
using StudentRes::avgMark;		// підключення конкретного члена з простору імені

void UseAnonymousNamespace()
{
	A classA;
	classA.Show();
}

void main()
{
	Frog::Say();
	Duck::Say();

	UseAnonymousNamespace();

	TeacherInfo t1;
	t1.Show();
	TeacherInfo t2;
	t2.Show();

	cout << id << endl;
	cout << StudentRes::id << endl;

	StudentRes::StudentInfo s1; // явне вказання простору імені
	s1.Show();
	StudentRes::StudentInfo s2;
	s2.Show();

	cout << avgMark << endl;

	system("pause");
}