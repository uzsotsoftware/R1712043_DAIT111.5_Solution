/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.h
 * Author: Jerry
 *
 * Created on April 22, 2019, 6:35 AM
 */

#ifndef PATIENT_H
#define PATIENT_H

using namespace std;

class Patient {
    int patientId;
    char name[40];
    char gender[10];
    char dob[10];
    char phone[12];
    char address[50];
    char race [40];
    char nationality[40];
    char allergies[50];
    char diseases[50];
    char medicalHistory[50];
    char prescription[50];
    char doctor[40];
    char status[15];
public:
    Patient();
    Patient(int pId, char* pname, char* pgender, char* pdob, char* pphone, char* paddress, char* prace, char* pnation, char* pallergies, char* pdiseases, char* pmedical, char* pprescription, char* pdoctor);
    void GetPatient();
    virtual ~Patient();
private:

};

#endif /* PATIENT_H */

