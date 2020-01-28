#include <iostream>
#include <string>
using namespace std;

class Pet {

    public:

        /* default class constructor */
        Pet();

        string name = "/0";
        string type = "dog";

        /* getter functions - access private data (age, weight) */
        int getAge();
        double getWeight();

        /* setter functions - methods that set properties for a Pet instance */
        /* public data setters */
        string setName();
        string setType();
        /* private data setters */
        int setAge();
        double setWeight();
        

    private:
        
        int age = 0;        
        double weight = 0.0;
    
};