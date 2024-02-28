/*5.Static and non-static members: Create a vehicle having a non-static data member registration number and a static data member count. Non-static member functions setregno() and getregno() are used to get and set the registration number. A static member function getVehiclecount() is used to return the number of vehicles in the garage. Use a constructor to increment the vehicle count when a vehicle is created and the destructor to decrement the count when the vehicle is destroyed.*/

#include<iostream>
using namespace std;

class vehicle{
        string regno;
        public:
            static int count;
            vehicle(){
                    count++;
            }
            ~vehicle(){
                cout<<endl<<count;
                count--;
            }
            void setregno(){
                cout<<"enter the reg no:"<<endl;
                    cin>>regno;
            }

            string getregno(){
                    return regno;
            }
            static int vehiclecount(){
                return count;
            }
};
int vehicle::count=0;
int main(){
    vehicle a,b,c;
    a.setregno();
    b.setregno();
    c.setregno();
    cout<<"a="<<a.getregno()<<endl;
    cout<<"b="<<b.getregno()<<endl;
    cout<<"c="<<c.getregno()<<endl;
    cout<<"vehicle  count ="<<vehicle::count;
}