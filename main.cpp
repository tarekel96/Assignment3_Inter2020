#include <iostream>
#include <string>
#include "class_pet.h"

using namespace std;

int main(int argc, char ** argv) {

    /* oreo - first instance created for the Pet class */
    Pet oreo;

    /* properties of oreo are assigned via Setter Methods */
    oreo.SetName("Oreo");
    oreo.SetType("Dog");
    oreo.SetAge(12);
    oreo.SetWeight(92.6);

    cout << endl;
    cout << "Name: " << oreo.GetName() << endl;
    cout << "Type: " << oreo.GetType() << endl;
    cout << "Age: " << oreo.GetAge() << " years old" << endl;
    cout << "Weight: " << oreo.GetWeight() << " lbs." << endl;
    cout << endl;

    /* sofia - second instance created for the Pet class */
    Pet sofia;

    sofia.SetName("Sofia");
    sofia.SetType("Dog");
    sofia.SetAge(9);
    sofia.SetWeight(45.6);

    cout << endl;
    cout << "Name: " << sofia.GetName() << endl;
    cout << "Type: " << sofia.GetType() << endl;
    cout << "Age: " << sofia.GetAge() << " years old" << endl;
    cout << "Weight: " << sofia.GetWeight() << " lbs." << endl;
    cout << endl;    

    return 0;
}