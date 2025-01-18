// Direktivs1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

#define MODE 1

  int main()
    {
      setlocale(LC_ALL, "RUS");
      int num1;
      int num2;
#ifdef MODE
     std::cout << "Работаю в боевом режиме" << std::endl;
#endif
        
 #ifndef MODE 
 #error 
#endif

#if  0
     std::cout << "Работаю в режиме тренировки";
#endif
#if  1     
#define int add(num1, num2)= num1+num2;
     std::cout << "Введите число 1: ";
     std::cin>> num1;
     std::cout << std::endl << "Введите число 2: ";
     std::cin >> num2;
     std::cout << std::endl<< "Результат сложения: "<< (num1 + num2);
#else
      std::cout << std::endl << "Неизвестный режим. Завершение работы";
#endif
    }



