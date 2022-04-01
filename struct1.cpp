/* Հայտարարել Student ստրուկտուրա, որն ունի անուն, ազգանուն, տարիք և քանակությամբ 5 առարկաների անվանումներ արտահայտող անդամ փոփոխականներ: Թույլ տվեք օգտվողին մուտքագրել տվյալները:
Ելնելով նախորդ խնդրից՝ ստեղծեք երկու Student օբյեկտներ և տպեք ավելի մեծ տարիք ունեցող աշակերտի անունն ու ազգանունը:
Նախորդ խնդրի Student երկու օբյեկտների միջոցով, ստեղծեք նոր օբյեկտ, որը կազմված կլինի այդ երկու օբյեկտներից: Այն կվերցնի առաջին օբյեկտի անունը, երկրորդ օբյեկտի ազգանունը, առաջին օբյեկտի տարիքը և երկրորդի առարկաները:*/
#include <iostream>
#include <string>

struct student
{
      std::string name;
      std::string surname;
      int age;
      std::string Physics;
      std::string Chemistry;
      std::string Mathematics;
      std::string English;
      std::string Biology;
      
};


int main()
{
   
    std::cout << "Enter information," << std::endl;
   
   student arr[2];
   
  for(int i = 0; i < 2; ++i)
  {
      std::cout << "Enter your Name :";
       std::cin >> arr[i].name; 
      std::cout << "Enter surname: ";
       std::cin >> arr[i].surname; 
      std::cout << "Enter age ";
     std::cin >> arr[i].age;    
  }
  
  return 0;
}
