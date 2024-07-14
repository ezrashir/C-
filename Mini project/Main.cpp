// Project for learning C++ 
// Challange was creating a satabase of students, grades and classes anf printing the student record card + writing a record card into a file.

#include <iostream>
#include <vector>
#include "records.h"
#include "records.cpp"

void initialize(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;
    
    initialize(SR);
    
    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    SR.record_file(id);
    
    std::cout << std::endl << std::endl;
    return (0);
}



// choose for initializing data for creating a file with the student record
void initialize(StudentRecords& srec){
    // Uploading students data
    std::ifstream inFile;
    std::string name, id;
    inFile.open("students.txt");
    if (inFile.fail())
        std::cout << "Failed to open file " << "students.txt" << std::endl;
    else{
        while(!inFile.eof()){
            getline(inFile, id);
            getline(inFile, name);
            srec.add_student(stoi(id), name);
        }
    }
    inFile.close();

    // Uploading courses data
    std::string credits;
    inFile.open("courses.txt");
    if (inFile.fail())
        std::cout << "Failed to open file " << "courses.txt" << std::endl;
    else{
        while(!inFile.eof()){
            getline(inFile, id);
            getline(inFile, name);
            getline(inFile, credits);
            srec.add_course(stoi(id), name, stoi(credits));
        }
    }
    inFile.close();

    // Uploading grade data
    std::string sid, cid, grade;
    int num_grade;
    inFile.open("grades.txt");
    if (inFile.fail())
        std::cout << "Failed to open file " << "grades.txt" << std::endl;
    else{
        while(!inFile.eof()){
            getline(inFile, sid);
            getline(inFile, cid);
            getline(inFile, grade);
            num_grade = srec.get_num_grade(grade[0]);
            srec.add_grade(stoi(sid), stoi(cid), num_grade);
        }
    }

}

// choose for initializing data for printing the student record
// void initialize(StudentRecords& srec){
//     srec.add_student(1, "George P. Burdell");
//     srec.add_student(2, "Nancy Rhodes");

//     srec.add_course(1, "Algebra", 5);
//     srec.add_course(2, "Physics", 4);
//     srec.add_course(3, "English", 3);
//     srec.add_course(4, "Economics", 4);

//     srec.add_grade(1, 1, 'B');
//     srec.add_grade(1, 2, 'A');
//     srec.add_grade(1, 3, 'C');
//     srec.add_grade(2, 1, 'A'); 
//     srec.add_grade(2, 2, 'A');
//     srec.add_grade(2, 4, 'B');
// }
