#ifndef PERSON_HPP_INCLUDED
#define PERSON_HPP_INCLUDED

#include<string>
#include<vector>
#include"Role.hpp"

class Person
{
public:
	Person() {};
	Person(std::vector<Role*> Roles, std::string CNP, std::string FirstName, std::string LastName, std::string Email);

	void setCNP(std::string);
	void setFirstName(std::string);
	void setLastName(std::string);
	void setEmail(std::string);
	void addRole(Role*);

	std::string getCNP() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmail() const;

	friend std::istream& operator >> (std::istream& stream, Person& ob);
	friend std::ostream& operator << (std::ostream& stream, const Person& ob);

protected:
	std::string mCNP;
	std::string mFirstName;
	std::string mLastName;
	std::string mEmail;
	std::vector<Role*> mRoles;
};


#endif // PERSON_HPP_INCLUDED
