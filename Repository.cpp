#include<iostream>
#include "Repository.hpp"

template<class T>
void Repository<T>::add(T* ob)
{
    mEntities.push_back(ob);
}

template<class T>
void Repository<T>::remove(T* ob)
{
    for(unsigned int i = 0; i < mEntities.size(); i++)
        if(mEntities[i] == ob)
            mEntities.erase(mEntities.begin()+i);
}

template<class T>
void Repository<T>::print()
{
    for(unsigned int i = 0; i < mEntities.size(); i++)
        std::cout << *mEntities[i]<<" " ;
    std::cout << '\n';

}
