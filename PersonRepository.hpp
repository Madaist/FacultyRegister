#ifndef PERSONREPOSITORY_HPP_INCLUDED
#define PERSONREPOSITORY_HPP_INCLUDED

#include <vector>
#include "Repository.hpp"
#include "Person.hpp"

class PersonRepository : public Repository<Person>
{
public:
	Person* findByFullName(std::string lName, std::string fName);
	Person* findByCNP(std::string cnp);

};


#endif // PERSONREPOSITORY_HPP_INCLUDED
