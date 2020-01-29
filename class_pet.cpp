#include <iostream>
#include "class_pet.h"

using namespace std;

/* define the SETTER functions via Pet class constructor */
void Pet::SetName(string nameIn){
    name = nameIn;
}
void Pet::SetType(string typeIn){
    type = typeIn;
}
void Pet::SetAge(int ageIn){
    age = ageIn;
}
void Pet::SetWeight(double weightIn){
    weight = weightIn;
}


/* define the GETTER functions via Pet class constructor */
string Pet::GetName(){
    return name;
}
string Pet::GetType(){
    return type;
}
int Pet::GetAge(){
    return age;
}
double Pet::GetWeight(){
    return weight;
}

