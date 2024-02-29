/*
Inheritance and Constructors: Design a class named PersonData with the following
member variables: lastName, firstName, address, city, state and phone. Write the
appropriate constructor, accessor and mutator functions. Next, design a class named
CustomerData, which is derived from the PersonData class. The CustomerData class has
member variables: customerNumber and email id. The customerNumber variable holds a
unique integer for each customer. Write appropriate constructors, accessor and mutator
functions. Demonstrate an object of the CustomerData class in retrieving individual
customer data.
*/
// #include<iostream>
// using namespace std;
// class PersonData{
//     string lastname;
//     string firstname;
//     string address;
//     string city;
//     string state;
//     string ph;
//     public:
//         PersonData(){
//             cout<<"lastname:";
//             cin>>lastname;
//             cout<<"first name :";
//             cin>>firstname;
            
//         }

    
//     };
#include <iostream>
#include <string>
using namespace std;

class PersonData {
private:
    std::string lastName;
    std::string firstName;
    std::string address;
    std::string city;
    std::string state;
    std::string phone;

public:
    // Constructor
    PersonData(){
        cout<<"enter the first name:";
        cin>>lastName;
    }

    // Accessors
    std::string getLastName() const { return lastName; }
    std::string getFirstName() const { return firstName; }
    std::string getAddress() const { return address; }
    std::string getCity() const { return city; }
    std::string getState() const { return state; }
    std::string getPhone() const { return phone; }

    // Mutators
    void setLastName(const std::string& lastName) { this->lastName = lastName; }
    void setFirstName(const std::string& firstName) { this->firstName = firstName; }
    void setAddress(const std::string& address) { this->address = address; }
    void setCity(const std::string& city) { this->city = city; }
    void setState(const std::string& state) { this->state = state; }
    void setPhone(const std::string& phone) { this->phone = phone; }
};

class CustomerData : public PersonData {
private:
    int customerNumber;
    string email;

public:
    static int unique;
    // Constructor
    CustomerData() {
                customerNumber=unique;
                unique++;
          }

    // Accessors
    int getCustomerNumber() const { return customerNumber; }
    std::string getEmail() const { return email; }

    // Mutators
    //void setCustomerNumber(int customerNumber) { this->customerNumber = customerNumber; }
    void setEmail(const std::string& email) { this->email = email; }
};
int CustomerData :: unique=1;

int main() {
    CustomerData customer;
    CustomerData customer2;

    // Demonstrate accessing individual customer data
    std::cout << "Last Name: " << customer.getLastName() << std::endl;
   // std::cout << "First Name: " << customer.getFirstName() << std::endl;
   // std::cout << "Address: " << customer.getAddress() << std::endl;
   // std::cout << "City: " << customer.getCity() << std::endl;
    //std::cout << "State: " << customer.getState() << std::endl;
   // std::cout << "Phone: " << customer.getPhone() << std::endl;
    std::cout << "Customer Number: " << customer.getCustomerNumber() << std::endl;
  //  std::cout << "Email: " << customer.getEmail() << std::endl;
    std::cout << "Customer Number: " << customer2.getCustomerNumber() << std::endl;

    return 0;
}
