#include <iostream>
#include <vector>
using namespace std;

class Course{
private:
    string course_name;
    int course_hour;
    string course_code;
    string professor;
    //vector<Student>
    vector<string> students;
    vector<Course> courses;
public:
    //default constructor for course class
    Course()
    {

    }
    Course(string course_name,int course_hour,string course_code,string professor)
    {
        this->course_name=course_name;
        this->course_hour=course_hour;
        this->course_code=course_code;
        this->professor=professor;
    }

    //course name setter
    void set_course_name(string name)
    {
        course_name=name;
    }
    //course name getter
    string get_course_name()
    {
        return course_name;
    }
    //professor name setter
    void set_professor(string name)
    {
        professor=name;
    }
    //professor name setter
    string get_professor()
    {
        return professor;
    }

    void set_course_hour(int hours)
    {
        professor=hours;
    }
    //professor name setter
    int get_course_hour()
    {
        return course_hour;
    }

    //professor name setter
    void set_course_code(string code)
    {
        course_code=code;
    }
    //professor name setter
    string get_course_code()
    {
        return course_code;
    }


};


int main()
{

    return 0;
}
