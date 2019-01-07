#include <iostream>
#include "Person.hpp"
#include "Role.hpp"
#include "Activity.hpp"
#include "Room.hpp"
#include "TeacherRole.hpp"
#include "StudentRole.hpp"
#include "ActivityRepository.hpp"
#include "PersonRepository.hpp"
#include "RoomRepository.hpp"
#include "Person.cpp"
#include "Role.cpp"
#include "Activity.cpp"
#include "Room.cpp"
#include "TeacherRole.cpp"
#include "StudentRole.cpp"
#include "ActivityRepository.cpp"
#include "PersonRepository.cpp"
#include "RoomRepository.cpp"
#include "Repository.hpp"
#include "Repository.cpp"
#include "Discipline.hpp"
#include "DisciplineRepository.hpp"
#include "StudyGroup.hpp"


int main()
{

    PersonRepository students;
    PersonRepository teachers;
    RoomRepository rooms;
    ActivityRepository activities;
    DisciplineRepository disciplines;

    teachers.add(new Person({new TeacherRole()}, "111", "Dobrovat", "Anca", "dobrovata@gmail.com"));
    teachers.add(new Person({new TeacherRole()}, "222", "Rapeanu", "Stefan", "rapeanus@gmail.com"));
    teachers.add(new Person({new TeacherRole()}, "333", "Predut", "Sorina", "preduts@gmail.com"));

    students.add(new Person({new StudentRole()}, "000", "Istrate", "Madalina", "istratem@gmail.com"));
    students.add(new Person({new StudentRole(10)}, "101", "Musat", "Alexandra", "musata@gmail.com"));

    rooms.add(new Room("Haret"));
    rooms.add(new Room("Sala 318"));
    rooms.add(new Room("Pompeiu"));

    activities.add(new Activity(rooms.findByName("Haret"), teachers.findByCNP("111"), "Curs"));
    activities.add(new Activity(rooms.findByName("Sala 318"), teachers.findByCNP("222"), "Laborator"));
    activities.add(new Activity(rooms.findByName("Pompeiu"), teachers.findByCNP("333"), "Seminar"));

    StudyGroup* studyGroup = new StudyGroup(254,
    {
        new Discipline("OOP", "Laboratory",
        {new Activity(rooms.findByName("Sala 318"), teachers.findByCNP("111"), "Laborator")})
    });

    students.add(new Person({new StudentRole(1, "CTI", studyGroup)}, "222", "Neagu", "Oana", "neaguo@gmailcom" ));

    disciplines.add(new Discipline("OOP", "Laborator", {activities.findByOwner(teachers.findByCNP("222"))}));
    disciplines.add(new Discipline("OOP", "Curs", {activities.findByLocation(rooms.findByName("Haret"))}));

    students.add(new Person(
    {
        new StudentRole(2, "CTI",
        new StudyGroup(254, {disciplines.findByType("Curs")} ))
    },
    "123", "Raduta", "Andreea", "radutaa@gmail.com"
    ));

    std::cout << "STUDENTI:\n";
    students.print();
    std::cout << "PROFESORI:\n";
    teachers.print();
    std::cout << "SALI:\n";
    rooms.print();
    std::cout << "ACTIVITATI:\n";
    activities.print();


    std::cout << "MENIU\n";
    std::cout << "1 - Adaugare student.\n";
    std::cout << "2 - Adaugare profesor.\n";
    std::cout << "3 - Adaugare sala.\n";
    std::cout << "4 - Adaugare activitate.\n";
    std::cout << "5 - Adaugare disciplina.\n";
    int option;
    std::cout << "Introduceti optiunea: ";
    std::cin >> option;
    switch(option)
    {
    case 1:
    {
        Person p;
        std::cin >> p;
        Person* student = &p;
        students.add(student);
        break;
    }
    case 2:
    {
        Person p;
        std::cin >> p;
        Person* teacher = &p;
        teachers.add(teacher);
        break;
    }
    case 3:
    {
        Room r;
        std::cin >> r;
        Room* room = &r;
        rooms.add(room);
        break;
    }
    case 4:
    {
        Activity a;
        std::cin >> a;
        Activity* activity = &a;
        activities.add(activity);
        break;
    }
    case 5:
    {
        Discipline d;
        std::cin >> d;
        Discipline* discipline = &d;
        disciplines.add(discipline);
        break;
    }
    }

    std::cout << "STUDENTI:\n";
    students.print();
    std::cout << "PROFESORI:\n";
    teachers.print();
    std::cout << "SALI:\n";
    rooms.print();
    std::cout << "ACTIVITATI:\n";
    activities.print();

    return 0;

}
