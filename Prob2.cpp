/*Design a class "ParkingSpot" in C++ to manage the information and operations for 
individual parking spots in a parking lot. 
Attributes: 
• Spot ID: Unique identifier for the parking spot. 
• Whether it is occupied: Boolean value indicating if the parking spot is currently 
occupied. 
• Vehicle type: Type of vehicle occupying the spot (e.g., car, motorcycle). If 
unoccupied, set this to "Empty Spot". 
Methods: 
• Parameterized Constructor: Initializes spot id, whether it is occupied, and 
vehicle type. 
• "set_spot_id": Sets the spot id. 
• "set_spot_status": Sets whether the spot is occupied or not. 
• "set_vehicle_type": Sets the type of vehicle occupying the spot. 
• "get_spot_id": Returns the current spot id. 
• "get_spot_status": Returns whether the spot is occupied. 
• "get_vehicle_type": Returns the type of vehicle occupying the spot. 
• "park_vehicle": Parks a vehicle in an available spot. 
• "remove_vehicle_from_spot": Removes the vehicle from the spot. 
• "display_spot_info": Displays the current status of the parking spot. 
Main Function Requirements: 
1. Initialize Parking Spots: 
a. Create two ParkingSpot objects with IDs 1 and 2. 
b. Initialize spot 1 as empty (not occupied) and spot 2 as occupied by a 
red car. 
2. Simulate Daily Parking Activity: 
a. During the day, a blue car parks in spot 1. After some time, it leaves, 
freeing up spot 1 again. 
b. A worker mistakenly tries to park a motorcycle in spot 2, which is 
already occupied by a red car. Ensure that the system prevents this 
action. 
3. Display Spot Information: 
a. After each change in spot status (e.g., parking a vehicle, removing a 
vehicle, or attempting an invalid action), display the current 
information of each parking spot to verify correct system behavior.*/

//Solution

#inculde <iostream>
using namespace std;

class ParkingSpot {
private:
    int spot_id;
    bool occupied;
    string vehicle_type;
public:
    ParkingSpot(int sid,bool occ,string vctype) {
        spot_id=sid;
        occupied=occ;
        vehicle_type=vctype;
    }
    int get_spotid() {
        return spot_id;
    }
    string get_spot_status() {
        if(occupied==1) return "Slot Occupied";
        else { return "Slot Unoccupied";}
    }
    string get_vehichle_type() {
        return vehicle_type;
    }
    void set_spot_id(int n) {
        spot_id=n;
    }
    void set_spot_status(bool x) {
        occupied=x;
    }
    void set_vehicle_type(string vehicle) {
        vehicle_type=vehicle;
    }
void park_vehicle(string car) {
        if(occupied==1) {
            cout<<"The Place is already occupied"<<endl;
        }else {
            occupied=1;
            vehicle_type=car;
        }
    }
void remove_vehicle_from_spot() {
        occupied=0;
        vehicle_type=" ";
    }
void display_spot_info() {

        if(occupied==0) {
            cout<<"Is not Occupied"<<endl;
        }else {
            cout<<"Veichle type:"<<vehicle_type<<endl;
            cout<<"IS Occupied"<<endl;
            cout<<"Spot id: "<<spot_id<<endl;
        }
    }
};
int main() {
    ParkingSpot s1(1,0,"");
    ParkingSpot s2(2,1,"red");
    s1.park_vehicle("blue");//stores the blue vehicle
    s2.park_vehicle("Motorcycle");//"The Place is already occupied"
    s1.display_spot_info();//blue occupied id:1
    s2.display_spot_info();//red occupied id:2
}
