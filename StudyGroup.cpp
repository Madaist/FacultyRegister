#include "StudyGroup.hpp"

StudyGroup::StudyGroup(int group, std::vector<Discipline*> Disciplines)
{
    mGroup = group;
    mDisciplines = Disciplines;
}

void StudyGroup::setGroup(int group)
{
    mGroup = group;
}

int StudyGroup::getGroup()
{
    return mGroup;
}

std::vector<Discipline*> StudyGroup::getDisciplines()
{
    return mDisciplines;
}

std::vector<float> StudyGroup::getGrades()
{
    return mGrades;
}

void StudyGroup::addGrade(float grade, std::string subject)
{
    for(unsigned int i = 0; i < mDisciplines.size(); i++)
        if(mDisciplines[i]->getSubject() == subject)
        mGrades.push_back(grade);
}
