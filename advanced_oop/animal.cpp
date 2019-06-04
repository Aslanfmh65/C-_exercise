// include iostream for printing
#include <iostream>
// Define base class Animal
class Animal{
    // Define protected base class attributes
    protected:
        std::string color;
        std::string name;
        int age;
    // Define public setters and getters
    public:
        void setColor(std::string c){color = c; }
        void setName(std::string n){name = n; }
        void setAge(int a){age = a; }
    
        std::string getColor(){return color; }
        std::string getName(){return name; }
        int getAge(){return age; }
};

// Define subclass Snake
class Snake : public Animal{

    // Define private attribute length
    private:
        int length;
    // Define public getter and setter
    public:
        void setLength(int l){length = l; }
        int getLength(){return length; }
};
// Define subclass Cat
class Cat : public Animal {

    // Define private attribute height
    private:
        int height;
    // Define public getter and setter
    public:
        void setHeight(int h){height = h; }
        int getHeight(){return height; }
};


// Test in main()
main(){

    Snake snake;
    Cat cat;

    snake.setLength(6);
    snake.setColor("Red");
    cat.setHeight(4);
    cat.setName("Tippy");

    std::cout<< "This is snake is " << snake.getLength() << " and its color is "<< snake.getColor() << "\n";
    std::cout<< "This is cat is " << cat.getHeight() << " and its name is "<< cat.getName() << "\n";

/*
    Animal an;
    an.setColor("Orange");
    an.setName("Tippy");
    an.setAge(4);

    std::cout<< "This is an " << an.getAge() << " year old "<< an.getColor() << " animal called " << an.getName() << "\n";
**/
}
