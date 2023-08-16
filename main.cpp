#include <iostream>

using namespace std;
class Student:public Person{
private:
    float gpa;
    int level;

public:

    //default constructor
    student(){}

    //parameterized constructor
    Student(float gpa, int level)
    {
        this->gpa = gpa;
        this->level = level;
    }

    //setter and getter
    void set_gpa(float gpa){
     this->gpa = gpa;
     }
      float get_gpa(){
        return gpa;
    }
       void set_level(int level){
     this->level = level;
     }
      int get_level(){
        return level;
    }

     };
    //departement

    class department{
private:

    string department_name;
    int capacity;
    float required_gpa;

public:

    department(){}

    department(string department_name, int capacity, float required_gpa ){
    this->department_name= department_name;
    this->capacity = capacity;
    this->required_gpa = required_gpa;

    }
     void set_department_name(string department_name){
     this->department_name = department_name;
     }
      float get_department_name(){
        return department_name;
    }

     void set_capacity(int capacity){
     this->capacity = capacity;
     }
      int get_capacity(){
        return capacity;
    }
     void set_required_gpa(float required_gpa){
     this->required_gpa = required_gpa;
     }
      float get_required_gpa(){
        return required_gpa;
    }


    };





int main()
{

}
