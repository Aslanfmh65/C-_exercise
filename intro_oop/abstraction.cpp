#include <iostream>
class Abstraction {
    private:
        double var1, var2;
    public:
        void SetValue(int a, int b){
	    var1 = a;
	    var2 = b;
	}
	
	void print_value(){
	    std::cout << "First value is " << var1 << "\n";
	    std::cout << "Second value is " << var2 << "\n";
	}
};

int main(){
    Abstraction abs;
    abs.SetValue(4,9);
    abs.print_value();
}
