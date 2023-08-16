#include<iostream>
using namespace std;
class Person {
 private:
     int age;
     int id;
     string name;
          string gender;

public:
   Person()
   {
        age = 0;
 static long id = generate_id();
        name = "";
        gender = "";
   }

   Person(int a,int i,string n,string g)
   {
   age=a;
   id=i;
   name=n;
   gender=g;
   }
//setter
void set_age(int age_s){
 age=age_s;
}
void set_id(int id_s)
{
 id=id_s;
}
void set_name(int name_s)
{
 name=name_s;
}
void set_gender(int gender_s)
{
 gender=gender_s;
}
//getter
int get_age()
{
return age;
}
int get_id()
{
return id;
}
string get_name()
{
return name;
}
string get_gender()
{
return gender;
}
 long generate_id(){
   static int counter=0;
   return ++counter;
 }
};

class Prof::public Person{
private:
    string degree;
    double salary;
public:
    Prof()
    {
    }
    Prof(string d,double salary)
    {
        degree=d;
        salary=s;
    }

    void set_degree(double degree_f){
  degree=degree_f;
    }
        void set_salary(string salary_f){
  salary_f=salary_f;
    }
   double get_degree()
{
return degree;
}
string get_salary()
{
return salary;
}

};
int Person::id= 0;

int main(){







}
