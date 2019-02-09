#include <iostream>

int main() {
    
  double weight;
  int number;
  double weight1;
  
  std::cout<<"Write your earth weight:";
  std::cin>>weight;
  std::cout<<"Write number of planet (1 to 7):";
  std::cin>>number;
  std::cout<<"Your weight:"<<weight1<<" ";
  switch(number)
  {
     case 1:
			std::cout<<"on planet Venus";
      break;
     case 2:
			std::cout<<"on planet Mars";
      break;
      case 3:
			std::cout<<"on planet Jupiter";
      break;
      case 4:
			std::cout<<"on planet Saturn";
      break;
      case 5:
			std::cout<<"on planet Uranus";
      break;
      case 6:
			std::cout<<"on planet Neptun";
      break;
      case 7:
			std::cout<<"on Moon";
      break;
  }
  
  		
  if (number == 1)
  {
   weight1 = weight*0.79;
  }
   else if (number == 2)
  {
   weight1 = weight*0.39;
  }
  else if (number == 3)
  {
   weight1 = weight*2.53;
  }
  else if (number == 4)
  {
   weight1 = weight*1.17;
  }
  else if (number == 5)
  {
   weight1 = weight*1.05;
  }
  else if (number == 6)
  {
   weight1 = weight*1.23;
   }
  else if (number == 7)
  {
   weight1 = weight*0.1;
   }
}
