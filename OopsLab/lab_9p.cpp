/*Create a Class Shape with member variables dimension and member function:
getdimenstion() to intialize the member variable and pure virtual function
calculateArea(). Create Square class which inherits the shape class and calculates the
area of square. Create Circle class which inherits the shape class and calculates the
area of circle. Demonstrate runtime polymorphism in the main function to calculate
area of square and circle.*/

#include<iostream>
using namespace std;
class shape{
    protected:
    int dimention;
    public:
        void getdim(){
            cout<<"enter the dimention";
            cin>>dimention;
        }
        virtual void calculatearea()=0;
};
class square:public shape{
    public:
    void calculatearea(){
        cout<<"square:"<<dimention*dimention;
    }
};
class circle:public shape{
    public:
    void calculatearea(){
        cout<<"circle:"<<3.14*dimention*dimention;
    }
};

int main(){
    square sq;
    circle cir;
    shape *ptr;
    ptr=&sq;
    ptr->getdim();
    //(*ptr).calculatearea();
    sq.calculatearea();
    ptr=&cir;
    ptr->getdim();
    cir.calculatearea();

}