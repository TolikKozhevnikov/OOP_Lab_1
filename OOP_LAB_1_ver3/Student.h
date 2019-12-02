#pragma once
#include <iostream>
#include <vector>
#include <string>
class Group;

using namespace std;

class Student
{
private:
	string Name1; 
	string Name2;
	string Name3;
	vector <string> Groups;
	
public:
	Student(const string& Name1, const string& Name2, const string& Name3);
	const string& GetName1();
	const string& GetName2();
	const string& GetName3();
	void JoinToGroup(Group& group);
	void LeftFromGroup(const string& GroupName);
	bool operator < (const Student& st) const {
		return this->Name1 > st.Name1;
	};
};

