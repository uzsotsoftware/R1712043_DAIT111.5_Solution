/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.cpp
 * Author: Jerry
 * 
 * Created on April 22, 2019, 6:35 AM
 */

#include <iostream>
#include <fstream>
#include <cstring>
#include "patient/Patient.h"

using namespace std;

Patient::Patient() {
}

Patient::Patient(int pId, char* pname, char* pgender, char* pdob, char* pphone, char* paddress, char* prace, char* pnation, char* pallergies, char* pdiseases, char* pmedical, char* pprescription, char* pdoctor) {
    patientId = pId;
    strcpy(name, pname);
    strcpy(gender, pgender);
    strcpy(dob, pdob);
    strcpy(phone, pphone);
    strcpy(address, paddress);
    strcpy(race, prace);
    strcpy(nationality, pnation);
    strcpy(allergies, pallergies);
    strcpy(diseases, pdiseases);
    strcpy(medicalHistory, pmedical);
    strcpy(prescription, pprescription);
    strcpy(doctor, pdoctor);
}

Patient::~Patient() {
}

void Patient::GetPatient() {
    cout << "\n";
    cout << "Patient ID......:" << patientId << endl;
    cout << "Full Name.......:" << name << endl;
    cout << "Gender..........:" << gender << endl;
    cout << "Date of Birth...:" << dob << endl;
    cout << "Phone number....:" << phone << endl;
    cout << "Address.........:" << address << endl;
    cout << "Race............:" << race << endl;
    cout << "Nationality.....:" << nationality << endl;
    cout << "Allergies.......:" << allergies << endl;
    cout << "Known diseases..:" << diseases << endl;
    cout << "Medical history.:" << medicalHistory << endl;
    cout << "Prescription....:" << prescription << endl;
    cout << "Doctor..........:" << doctor << endl;
}

