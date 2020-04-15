#pragma once
#include "Person.h"
#include <iostream>

std::string Person::getName()
{
	return firstname + " " + lastname;
}

void Person::enterDetail() {
	std::cout << "Enter the First Name : ";
	std::cin >> firstname;
	std::cout << "\nEnter the Last Name: ";
	std::cin >> lastname;
}

Person::Person(std::string first, std::string last, int arbitrary):
	firstname(first), lastname(last), arbitrarynumber(arbitrary) {
	std::cout << "Constructing " << firstname + " " + lastname << std::endl;
}

Person::Person() {
	firstname = "";
	lastname = "";
	arbitrarynumber = 0;
	std::cout << "Constructing default object of class Person \n";
}

Person::~Person() {
	std::cout << "destructing " << firstname << " " << lastname << std::endl;
}