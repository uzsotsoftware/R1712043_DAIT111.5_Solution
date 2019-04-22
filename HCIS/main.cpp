/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jerry
 *
 * Created on April 20, 2019, 4:07 AM
 */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jerry
 *
 * Created on April 20, 2019, 3:49 AM
 */

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include "patient/Patient.h"

using namespace std;

void WriteToFile(Patient patient);

void GetPatientDetails() {
    char opt;
    char ch;

    int pId;
    char pname[40];
    char pgender[10];
    char pdob[10];
    char pphone[12];
    char paddress[50];
    char prace [40];
    char pnation[40];
    char pallergies[50];
    char pdiseases[50];
    char pmedical[50];
    char pprescription[50];
    char pdoctor[40];

    do {
        cout << "Enter Patient ID........:";
        cin >> pId;
        cin.ignore();
        cout << "Enter Name..............:";
        cin.getline(pname, 40);
        cout << "Enter Gender............:";
        cin.getline(pgender, 10);
        cout << "Enter Date of birth.....:";
        cin.getline(pdob, 10);
        cout << "Enter Phone number......:";
        cin.getline(pphone, 12);
        cout << "Enter Address...........:";
        cin.getline(paddress, 50);
        cout << "Enter Race..............:";
        cin.getline(prace, 40);
        cout << "Enter Nationality.......:";
        cin.getline(pnation, 40);
        cout << "Enter Allergies.........:";
        cin.getline(pallergies, 50);
        cout << "Enter Diseases..........:";
        cin.getline(pdiseases, 50);
        cout << "Enter Medical history...:";
        cin.getline(pmedical, 50);
        cout << "Enter Prescription......:";
        cin.getline(pprescription, 50);
        cout << "Enter Doctor............:";
        cin.getline(pdoctor, 50);

        Patient patient(pId, pname, pgender, pdob, pphone, paddress, prace, pnation, pallergies, pdiseases, pmedical, pprescription, pdoctor);
        WriteToFile(patient);

        cout << "Do you want to enter another patient <y-Yes n-No>" << endl;
        opt = getchar();
        cin.ignore();

    } while (opt != 'n');

}

void WriteToFile(Patient patient) {

    ofstream outFile("patients", ios::app | ios::binary);
    outFile.write((char*) &patient, sizeof (Patient));
    outFile.flush();

    if (outFile)
        cout << "\n Patient record saved successfully" << endl;
    else
        cout << "Error saving patient file" << endl;

    outFile.close();

}

void ReadFromFile(streamsize position);

void ReadPatientPosition() {
    streamsize position;
    cout << "Enter the patient number to retrieve...";
    cin>>position;
    ReadFromFile(position);
}

void ReadFromFile(streamsize position) {
    Patient patient;

    ifstream inFile("patients", ios::in | ios::binary);

    inFile.seekg(sizeof (Patient)*(position - 1), ios::beg);
    inFile.read((char *) &patient, sizeof (Patient));
    patient.GetPatient();
}

int main() {
    GetPatientDetails();
    ReadPatientPosition();
}