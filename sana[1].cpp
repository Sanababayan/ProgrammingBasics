#include "grader.h"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

Patient::Patient(string firstname, string lastname, int visit_time, int visit_length) {
    Patient::firstname = firstname;
    Patient::lastname  = lastname;
    Patient::visit_time = visit_time;
    Patient::visit_length = visit_length;
}

string Patient::get_firstname() {
    string fname = Patient::firstname;
    return fname;
}

string Patient::get_lastname() {
    string lname = Patient::lastname;
    return lname;
}

int Patient::get_visit_time() {
    int vtime = Patient::visit_time;
    return vtime;
}

int Patient::get_visit_length() {
    int vlength = Patient::visit_length;
    return vlength;
}

void Clinic::set_maximum_patients(int maximum_patients) {
    Clinic::maximum_patients = maximum_patients;
}

bool Clinic::add_patient(string firstname, string lastname, int visit_time, int visit_length) {
    

    for (int i = 0; i < Clinic::patients.size(); i++){
        Patient patient = Clinic::patients.at(i);
        string lname = patient.get_lastname();

        if(lname == lastname){
            return false;
        }
    }

    for (int i = 0; i < Clinic::patients.size(); i++){

        Patient patient = Clinic::patients.at(i);
        int vtime    = patient.get_visit_time();
        int vlength  = patient.get_visit_length();
        
        if(vtime == visit_time){
            return false;
        }else if(vtime * 60 <= visit_time * 60 && visit_time * 60 < vtime * 60 + vlength){
            return false;
        }else if(vtime * 60 < visit_time * 60 + visit_length && visit_time * 60 + visit_length <= vtime * 60 + vlength){
            return false;
        }else if(visit_time * 60 <= vtime * 60  && vtime * 60 < visit_time * 60 + visit_length){
            return false;
        }else if(visit_time * 60 < vtime * 60 + vlength  &&  vtime * 60 + vlength <= visit_time * 60 + visit_length){
            return false;
        }

    }

    if(Clinic::patients.size() == Clinic::maximum_patients){
        return false;
    }

    Patient new_patient(firstname,lastname,visit_time,visit_length);

    int valid = 0;
    
    for (int i = 0; i < Clinic::patients.size(); i++){

        Patient patient = Clinic::patients.at(i);
        int vtime  = patient.get_visit_time();
        if(vtime > visit_time){
            auto p  = Clinic::patients.begin();
            Clinic::patients.insert(p + i ,new_patient);
            valid  = 1;
            break;
        }
    }


    if(!valid){
        Clinic::patients.push_back(new_patient);
    }
    
    return true;
}

bool Clinic::remove_patient(std::string lastname) {

     for (int i = 0; i < Clinic::patients.size(); i++){

        Patient patient = Clinic::patients.at(i);
        string lname = patient.get_lastname();
        if(lname == lastname){
            auto p  = Clinic::patients.begin();
            Clinic::patients.erase(p + i);
            return true;
        }
    }
    return false;
}

void Clinic::checkup() {

    if(Clinic::patients.size() == 0){
        return;
    }

    auto avali = Clinic::patients.begin();
    Clinic::patients.erase(avali);
    return;
}

Patient Clinic::get_patient(int index) {
    if(index  < Clinic::patients.size()){
        return Clinic::patients.at(index);
    }
}

