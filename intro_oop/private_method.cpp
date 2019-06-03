//Version 1
/*

// include iostream for printing
#include <iostream>
// Define class Abstract
class Abstract{
    // Define private attributes
    private:
        int number;
        char character;
        
        void ProcessAttributes(){
            number *= 6;
            character ++;
        }
    // Define private method - Used to perform inner logic
        
    // Define public getter and setter (getter calls private method)
    public:
        void setter(int num, char charac){
            number = num;
            character = charac;
        }
    
        void getter(){
            ProcessAttributes();
            std::cout << "Number is " << number << "\n";
            std::cout << "Character is " << character << "\n";
        }
};

// Test in main()
int main(){
    Abstract abs;
    abs.setter(200, 'W');
    abs.getter();
}

**/

//Version 2
// include iostream for printing
#include <iostream>
// Define class Abstract
class Abstract{
    // Define private attributes
    private:
        int number;
        char character;
    
        void ProcessAttributes();
    // Define private method - Used to perform inner logic
        
    // Define public getter and setter (getter calls private method)
    public:
        void setter(int num, char charac);
        void getter();
};

void Abstract::ProcessAttributes(){
    Abstract::number *= 6;
    Abstract::character ++;
}

void Abstract::setter(int num, char charac){
    Abstract::number = num;
    Abstract::character = charac;
}

void Abstract::getter(){
    Abstract::ProcessAttributes();
    std::cout << "Number is " << Abstract::number << "\n";
    std::cout << "Character is " << Abstract::character << "\n";
}

// Test in main()
int main(){
    Abstract abs;
    abs.setter(200, 'W');
    abs.getter();
}

