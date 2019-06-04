// include iostream for printing
#include <iostream>
// Define pi
const double pi = 3.14;

// Define Line Class
class Line {
    // Define protected attribute length
    protected:
        double length;
};

// Define Circle subclass
class Circle : public Line {
    // Define public setRadius() and getArea()
    public:
        void setRadius(double x);
        double getArea();
};

void Circle::setRadius(double r){
    Circle::length = r;
}

double Circle::getArea(){
    return Circle::length*Circle::length*pi;
}

// Test in main()
int main(){
    Circle circle;
    circle.setRadius(4);
    
    std::cout<<"Cicle area is " << circle.getArea() << "\n";
}
