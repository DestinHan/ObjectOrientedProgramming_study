#include <iostream>
#include <vector>
#include <string>

class Doctor;   // forward declaration (for compiler error)

class Patient {
private:
    std::string m_name;
    std::vector<Doctor*> m_doctors;
    
public:
    Patient(std::string name_in) : m_name(name_in) {}
    
    void addDoctor(Doctor * new_doctor) {
        m_doctors.push_back(new_doctor);
    }
    
    void meetDoctors();
    
    friend class Doctor;
    
};

class Doctor {
private:
    std::string m_name;
    std::vector<Patient*> m_patients;
    
public:
    Doctor(std::string name_in) : m_name(name_in) {}
    
    void addPatient(Patient * new_patient) {
        m_patients.push_back(new_patient);
    }
    
    void meetPatients() {
        for (auto & ele : m_patients) {
            std::cout << "Meet Patients : " << ele->m_name << std::endl;
        }
    }
    
    friend class Patient;
    
};

void Patient::meetDoctors() {
    for (auto & ele : m_doctors) {
        std::cout << "Meet Doctor : " << ele->m_name << std::endl;
    }
}

int main() {
    
    using namespace std;
    
    Patient *p1 = new Patient("Jack Jack");
    Patient *p2 = new Patient("Dash");
    Patient *p3 = new Patient("Violet");
    
    Doctor *d1 = new Doctor("Doctor K");
    Doctor *d2 = new Doctor("Doctor L");
    
    
    p1 -> addDoctor(d1);
    d1 -> addPatient(p1);
    
    p2 -> addDoctor(d2);
    d2 -> addPatient(p2);
    
    // patient meet doctors
    p1->meetDoctors();
    // doctors meet patients
    d1->meetPatients();
    // delets
    delete p1;
    delete p2;
    delete p3;
    
    delete d1;
    delete d2;
    
    return 0;
}
