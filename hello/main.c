/*
 * name    calculator
 * author  Anna Semenova
 * version 1.2
 */

#include <stdio.h>
#include <locale.h>

int main(void)
{
  int a;                                 // Объявляем переменные first number
  int b;                                 // second number
  char operation_type;
  float result;
  int i;

  setlocale(LC_ALL, "Russian");

  do
  {
      printf("Enter operation or quit" );
      printf("\nAvailable operations: +, -, *, /, ^, ! or 'q' - end: ");  //предлагеам выбрать операцию
      scanf(" %c", &operation_type);    //вводим операцию
      if (operation_type != 'q'){  //если выбираем завершить оперецию, то просим пользователя ввести первое число
      printf("Enter 1 number: ");
      scanf("%i", &a);
      }

    switch (operation_type)  //заходим воператор switch, дальше будет рабоать блок в зависимости от выбора операции
    {
      case '+':                        // если + то
        printf("Enter 2 number: ");    // ввести второе число
        scanf("%i", &b);                // просим ввести второе число
        result = a + b;
        printf("Result: %i + %i = %f \n", a, b, result);  // выводим результат
        break;                                           // нужен для того чтобы не работали сразу все "case"
      case '-':
        printf("Enter 2 number: ");
        scanf("%i", &b);
        result = a - b;
        printf("Result: %i - %i = %f \n", a, b, result);
        break;
      case '*':
        printf("Enter 2 number:");
        scanf("%i", &b);
        result = a * b;
        printf("Result: %i * %i = %f \n", a, b, result);
        break;
      case '/':
        printf("Enter 2 number:");
        scanf("%i", &b);
        result = a / b;
        printf("Result: %i / %i = %f \n", a, b, result);
        break;
      case '^':
        printf("Enter 2 number:");
        scanf("%i", &b);
        result = 1;

        for (i = 0; i < b; i++)
        {
          result = result * a;
        }
        printf("Result: %i ^ %i = %f \n", a, b, result);
        break;
      case '!':
        if (a == 0) // если number == 0, то факториал считать не нужно, ответ 1
        {
          result = 1;
        }
        else // если number != 0
        {
          result = 1;
          for (i = 1; i <= a; i++)
          {
            result = result * i;
          }
        }
        printf("Result: %i! = %f \n", a, result);
        break;
      case 'q':
        printf("End. Bye!^-^");
        break;
      default:                                 //если введено что то кроме предложанного символа то просим начать все сначала
        printf("Invalid character entered ");
        printf("Try it again");
        break;
    }
  }
  while (operation_type != 'q');

  return 0;
}


