#ifndef STUDYGROUP_HPP_INCLUDED
#define STUDYGROUP_HPP_INCLUDED

#include "Discipline.hpp"
#include<vector>
#include<string>

class StudyGroup
{
public:
    StudyGroup();
    StudyGroup(int Group, std::vector<Discipline*> Disciplines);

    void setGroup(int);
    int getGroup();
    std::vector<Discipline*> getDisciplines();
    std::vector<float> getGrades();
    void addGrade(float grade, std::string subject);

private:
    int mGroup;
    std::vector<Discipline*> mDisciplines;
    std::vector<float> mGrades;
};


#endif // STUDYGROUP_HPP_INCLUDED
