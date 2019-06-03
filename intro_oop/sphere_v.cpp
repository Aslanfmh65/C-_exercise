// Include iostream for printing
#include <iostream>

// Define class Sphere
class Sphere {
    
    // Define private attributes
    private:
        double radius;

    // Define public constructor
    public:
        Sphere(double r){
	    ra
            double volume = (4/3)*pow(r,3)*3.1415926;
        }
    // Define a function to return the volume
        double print_volume(){
            std::cout << "Volume is " << volume << "\n";
        }

        
};
// Test in main()

int main(){
    Sphere sp(4);
    sp.print_volume;
}

