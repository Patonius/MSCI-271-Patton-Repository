// lab11_firstname.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
    Reminders:
    - Use public inheritance for CollegeStudent and GraduateStudent.
    - Call the base constructor from each derived constructor’s initializer list.
    - Mark overrides with 'override' and keep displayInfo() 'const'.
    - In Project::displayProjectInfo(), print exactly the required lines, 
      then call the members’ displayInfo().
    - Match the expected output formatting from the handout.
*/

// ======================
// 1) Base Class: Student
// ======================
class Student {
protected:
    // TODO: add name, id (protected)
    string name;
    string id;


public:
    // TODO: constructor Student(string n, string i)
    Student(string n, string i) : name(n), id(i) {} 

    virtual ~Student() = default; // keep virtual for polymorphic base

    // TODO: virtual void displayInfo() const
    // Must print:  Name: <name>, ID: <id>
    virtual void displayInfo() const {
        // TODO
        cout << "Name: " << name << ", ID: " << id;
    }
};

// ==================================
// 2) Derived: CollegeStudent : Student
// ==================================
class CollegeStudent : public Student {
private:
    // TODO: major, gpa
    string major;
    double gpa;

public:
    // TODO: ctor CollegeStudent(string n, string i, string m, double g)
    CollegeStudent(string n, string i, string m, double g) : Student(n, i), major(m), gpa(g) {}
    // Must call base ctor in initializer list
  
    // TODO: override displayInfo() const
    // Must print: Name: <name>, ID: <id>, Major: <major>, GPA: <gpa>
    void displayInfo() const override {
        // TODO
        Student::displayInfo();
        cout << ", Major: " << major << ", GPA: " << gpa << endl; 
    }
};

// ==================================
// 3) Derived: GraduateStudent : Student
// ==================================
class GraduateStudent : public Student {
private:
    // TODO: researchTopic
    string researchTopic;


public:
    // TODO: ctor GraduateStudent(string n, string i, string topic)
    // Must call base ctor in initializer list
    GraduateStudent(string n, string i, string topic) : Student(n, i), researchTopic(topic) {}


    // TODO: override displayInfo() const
    // Must print: Name: <name>, ID: <id>, Topic: <researchTopic>
    void displayInfo() const override {
        // TODO
        Student::displayInfo();
        cout << ", Topic: " << researchTopic << endl;
    }
};

// ========================
// 4) Composition: Project
// ========================
class Project {
private:
    // TODO: projectName
    // TODO: GraduateStudent leader (by value)
    // TODO: CollegeStudent  member (by value)
    string projectName;
    GraduateStudent leader;
    CollegeStudent member;


public:
    // TODO: ctor Project(string pName, GraduateStudent l, CollegeStudent m)
    // Use initializer list to init all members
    Project(string pName, const GraduateStudent& l, const CollegeStudent& m) : projectName(pName), leader(l), member(m) {}


    // TODO: void displayProjectInfo() const
    // Must print exactly:
    // Project: <projectName>
    // Leader: <leader info via displayInfo()>
    // Member: <member info via displayInfo()>
    void displayProjectInfo() const {
        // TODO
        cout << "Project: " << projectName << endl;
        cout << "Leader: ";
        leader.displayInfo();
        cout << "Member: ";
        member.displayInfo();
    }
};

// =====================
// 5) Provided main()
// =====================
// DO NOT MODIFY main(). Your classes must work with this test harness.
int main() {
    // 1. Create the student objects
    GraduateStudent gradLeader("Scott", "M011", "Artificial Intelligence");
    CollegeStudent collMember("Tom", "CS001", "Computer Science", 3.1);

    cout << "--- Individual Student Info ---" << endl;
    gradLeader.displayInfo();
    collMember.displayInfo();
    cout << "\n";

    // 2. Create the project object (Demonstrating Composition)
    Project myProject("AI in Agricultural Waste", gradLeader, collMember);

    cout << "--- Project Info (Composition) ---" << endl;
    myProject.displayProjectInfo();
    cout << "\n";

    // 3. Demonstrate Polymorphism
    cout << "--- Polymorphism Demo ---" << endl;
    vector<Student*> team;
    team.push_back(&gradLeader);   // A GraduateStudent is-a Student
    team.push_back(&collMember);   // A CollegeStudent is-a Student

    for (const Student* s : team) {
        s->displayInfo();          // virtual dispatch
    }

    return 0;
}
