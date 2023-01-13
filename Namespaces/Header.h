#pragma once
#include <iostream>

using std::cout;
using std::endl;

const int MAX = 255;

namespace Frog
{
	void Say();
	void Move();
}

namespace Duck
{
	void Say();
	void Move();
}

namespace StudentRes
{
	extern int id;

	class StudentInfo
	{
		int id;		
	public:
		StudentInfo()
		{
			id = StudentRes::id++;
		}
		void Show() const;
	};
}

namespace TeacherRes
{
	extern int id;

	class TeacherInfo
	{
		int id;
	public:
		TeacherInfo()
		{
			id = TeacherRes::id++;
		}
		void Show() const;
	};
}

namespace StudentRes
{
	// продовження простору імен StudentRes
	extern int avgMark;
}

// Anonymous namespace
namespace
{
	class A
	{
	public:
		void Show() const
		{
			cout << "Class in anonymous namespace!\n";
		}
	};
}
A myClass;

//namespace anonymous
//{
//	class Anon {};
//	// .............
//}
//using namespace anonymous;
//
//Anon a1, a2;