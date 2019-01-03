#ifndef DISCIPLINEREPOSITORY_HPP_INCLUDED
#define DISCIPLINEREPOSITORY_HPP_INCLUDED

#include "Discipline.hpp"
#include "Repository.hpp"
#include <vector>

class DisciplineRepository : public Repository<Discipline>
{
public:
   Discipline* findBySubject(std::string name);
   Discipline* findByType(std::string type);


};


#endif // DISCIPLINEREPOSITORY_HPP_INCLUDED
