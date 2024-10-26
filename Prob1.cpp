/*Design a class "FitnessTracker" in C++ to track a user's daily step count and water 
intake. The class should include the following: 
Attributes: 
• Steps: to track the number of steps taken by the user. 
• Water Intake (in liters): to track the amount of water the user has consumed. 
Methods: 
• Default Constructor: Initializes steps and water intake to zero. 
• Parameterized Constructor: Initializes steps and water intake to specified values. 
• "set_steps": Sets the steps attribute to a specified value. 
• "set_water_intake": Sets the water intake attribute to a specified value. 
• "get_steps": Returns the current step count. 
• "get_water_intake": Returns the current water intake. 
• "add_steps": Adds a specified number of steps to the current steps total. 
• "add_water_intake": Adds a specified amount (in liters) to the water intake. 
• "display_progress": Displays the current step count and water intake. */



//Solution

#include <iostream>
using namespace std;
class FitnessTracker {
private:
    string name;
    float steps;
    float Water_intake;

    public:
    FitnessTracker() {
        name=" ";
        steps = 0;
        Water_intake = 0;
    }
    FitnessTracker(string n,float step,float w_i) {
        name=n;
        steps=step;
        Water_intake=w_i;
    }
    void set_steps(int step) {
        steps=step;
    }
    void set_water_intake(int water) {
        Water_intake=water;
    }
    float
    get_steps() {
       return steps;
    }
    float get_water_intake() {
        return Water_intake;
    }
    void add_steps(float n) {
        steps+=n;
    }
    void add_waterintake(float n) {
        Water_intake+=n;
    }
    void display_progress() {
        cout<<"Name : "<<name<<endl;
        cout<<"The currenr Steps are "<<steps<<endl;
        cout<<"The current water intake is "<<Water_intake<<endl;
    }
};

int main() {
    FitnessTracker Noor("Noor",0,0);
    FitnessTracker Amir("Amir",500,1);
    //initail
    Noor.display_progress(); // s:o w:0
    Amir.display_progress(); // s:500 w:1
    //day time
    Noor.add_steps(500);
    Noor.add_waterintake(3);
    Noor.display_progress();//s:500 w:3
    Amir.add_steps(1000);
    Amir.add_waterintake(2);
    Amir.display_progress();//s:1500 w:3
    //later(nighttime)
    Noor.add_steps(500);
    Amir.add_waterintake(2);
    Noor.display_progress(); //s:1000 w:3
    Amir.display_progress(); //s:1500 w:5
}
