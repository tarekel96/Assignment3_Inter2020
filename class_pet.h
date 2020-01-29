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

        /* setter functions - methods that set properties for a Pet instance */
        /* public data setters */
        void SetName(string nameIn); /* nameIn = nameInput, etc. */
        void SetType(string typeIn);
        /* private data setters */
        void SetAge(int ageIn);
        void SetWeight(double weightIn);

        /* getter functions - methods that get the properties for a Pet instance */
        string GetName();
        string GetType();
        int GetAge();
        double GetWeight();

        
        

    private:
        /* empty for now */
        
    
};