#include <iostream>
#include <string>

using namespace std;

class Pet {

    public:

        /* default class constructor */
        Pet(){}; 

        /* init class properties with default values */
        string name = "/0";
        string type = "dog";
        int age = 0;        
        double weight = 0.0;

        /* getter functions - access private data (age, weight) */
        string GetName();
        string GetType();
        int GetAge();
        double GetWeight();

        /* setter functions - methods that set properties for a Pet instance */
        /* public data setters */
        void SetName(string nameIn); /* nameIn = nameInput, etc. */
        void SetType(string typeIn);
        /* private data setters */
        void SetAge(int ageIn);
        void SetWeight(double weightIn);
        

    private:
        /* empty for now */
        
    
};