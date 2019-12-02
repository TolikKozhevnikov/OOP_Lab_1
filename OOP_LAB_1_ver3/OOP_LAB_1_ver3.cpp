// OOP_LAB_1_ver3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Group.h"
#include <iostream>

int main()
{
	Student* Vasiya = new Student("Vasiya", "Viktorovich", "Furminkov");
	Student* Stepan = new Student("Stepan", "Artemovich", "Koshachiy");
	Student* Jora = new Student("Jora", "Grigorievich", "Udalcov");
	Student* Gerald = new Student("Gerald", "Iz", "Rivii");
	Student* Ohrannic = new Student("Ohrannic", "Iz", "Vaytrana");


	Group* g7090 = new Group("g7090");
	Group* g7091 = new Group("g7091");

	Gerald->JoinToGroup(*g7090);
	Jora->JoinToGroup(*g7090);
	Stepan->JoinToGroup(*g7090);
	Ohrannic->JoinToGroup(*g7090);
	Vasiya->JoinToGroup(*g7090);

	Gerald->JoinToGroup(*g7091);

	g7090->ToExpelTheStudent(Jora);

	g7090->InfoAboutStudent(Gerald->GetName1(), Gerald->GetName2(), Gerald->GetName3());
	g7090->SortStudentName();
}

