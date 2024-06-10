#include <iostream>
#include <string>

class Marks {
protected:
    int rollNumber;
    std::string name;
    float marks;

public:
    Marks() : rollNumber(0), name(""), marks(0.0) {}

    void setDetails() {
        std::cout << "Enter name: ";
        std::cin >> name;
        rollNumber = generateRollNumber();
    }
    
    virtual void setMarks() = 0;  // Pure virtual function to be implemented by derived classes

    float getMarks() const {
        return marks;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    void displayDetails() const {
        std::cout << "Roll Number: " << rollNumber << "\nName: " << name << "\nMarks: " << marks << std::endl;
    }

private:
    static int rollNumberCounter;

    int generateRollNumber() {
        return ++rollNumberCounter;
    }
};

int Marks::rollNumberCounter = 0;

class Physics : public Marks {
public:
    void setMarks() override {
        std::cout << "Enter Physics marks: ";
        std::cin >> marks;
    }
};

class Chemistry : public Marks {
public:
    void setMarks() override {
        std::cout << "Enter Chemistry marks: ";
        std::cin >> marks;
    }
};

class Mathematics : public Marks {
public:
    void setMarks() override {
        std::cout << "Enter Mathematics marks: ";
        std::cin >> marks;
    }
};

int main() {
    int numStudents;

    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    Physics* physicsStudents = new Physics[numStudents];
    Chemistry* chemistryStudents = new Chemistry[numStudents];
    Mathematics* mathStudents = new Mathematics[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "\nEnter details for student " << i + 1 << ":\n";
        physicsStudents[i].setDetails();
        physicsStudents[i].setMarks();

        // chemistryStudents[i].setDetails();
        chemistryStudents[i].setMarks();

        // mathStudents[i].setDetails();
        mathStudents[i].setMarks();
    }

    // Calculate total and average marks for each subject
    float totalPhysics = 0.0, totalChemistry = 0.0, totalMath = 0.0;

    for (int i = 0; i < numStudents; ++i) {
        totalPhysics += physicsStudents[i].getMarks();
        totalChemistry += chemistryStudents[i].getMarks();
        totalMath += mathStudents[i].getMarks();
    }

    float averagePhysics = totalPhysics / numStudents;
    float averageChemistry = totalChemistry / numStudents;
    float averageMath = totalMath / numStudents;

    std::cout << "\nAverage Physics Marks: " << averagePhysics << std::endl;
    std::cout << "Average Chemistry Marks: " << averageChemistry << std::endl;
    std::cout << "Average Mathematics Marks: " << averageMath << std::endl;

    // Cleanup
    delete[] physicsStudents;
    delete[] chemistryStudents;
    delete[] mathStudents;

    // return 0;
}
