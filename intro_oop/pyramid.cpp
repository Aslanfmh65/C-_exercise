#include<iostream>
#include <cmath>


class Pyramid {

   private:
      double base_length;
      double base_width;
      double height;

   public:
      //Constructor
      Pyramid(int l, int b, int h){
	   base_length = l;
	   base_width = b;
	   height = h;
      }

      double getLength(){
	   return base_length;
      }

      double getWidth(){
	   return base_width;
      }

      double getHeight(){
	   return height;
      }

      double getVolume(){
           return (base_length*base_width*height) / 3;
      }
	
};

//void Pyramid::SetLength(int a){
   //Pyramid::base_length = a;
   //Pyramid::base_width = b;
   //Pyramid::height = c;
//}

//int Pyramid::GetLength(){
   //return Pyramid::base_length;
//}

int main(){
   //pyr.SetLength(6);
   Pyramid pyr(1,2,3);
   std::cout << "Length is " << pyr.getLength() << "\n";
   std::cout << "Width is " << pyr.getWidth() << "\n";
   std::cout << "Height is " << pyr.getHeight() << "\n";  
   std::cout << "Volumne is " << pyr.getVolume() << "\n";
}



