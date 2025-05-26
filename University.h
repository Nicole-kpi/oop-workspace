#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <vector>
#include <string>
#include "Course.h"
#include "Gradebook.h"
class University {
private:
    std::string name;
    std::string location;
    Gradebook* gradebook;
    std::vector<Course> courses;
public:
    University(const std::string& name, const std::string& location);
    void addCourse(int id, const std::string& name);
    Gradebook* get_gradebook() const;
    std::vector<Course> get_courses() const;
    ~University();
};
#endif