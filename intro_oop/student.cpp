#include<iostream>
#include <cmath>

// TODO: Define your "Student" class below with constructor
// and getter/setter methods
class Student {
     
     // define private attributes
     private:
        std::string name;
        int grade;
        float GPA;
         // student name
         // years of study
         // GPA

     public:     
         // write a public constructor for Student
         // that takes name, grade, and GPA
         // and initializes the private attributes
         Student(std::string a, int b, float c) {
             name = a;
             grade = b;
             GPA = c;
         }

         // getter for student name
         std::string GetName(){
             return name;
         }
         // getter for years of study
         int GetGrade(){
	     if (grade > 0){
		return grade;
	     } else {std::cout << "Warning: Grade cannot be negative" << "\n";}
             
         }
         // getter for student's GPA
         float GetGPA(){
             return GPA;
         }

/*
         // setter for student's name
         void SetName(std::string a1){
             name = a1;
         }
         // setter for years of study
         void SetGrade(int b1){
             grade = b1;
         }
         // setter for GPA
         void SetGPA(float c1){
             GPA = c1;
         }
**/
};

int main()
{
  // Test instantiation and getters / setters
    Student student("Stephen", -4, 3.12);
    std::cout << student.GetName() << "\n";
    std::cout << student.GetGrade() << "\n";
    std::cout << student.GetGPA() << "\n";
    
}
