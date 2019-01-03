#ifndef REPOSITORY_HPP_INCLUDED
#define REPOSITORY_HPP_INCLUDED

#include<vector>

template<class T>
class Repository
{
 public:
     void add(T* ob);
     void remove(T* ob);
     void print();

protected:
    std::vector<T*> mEntities;
};


#endif // REPOSITORY_HPP_INCLUDED
