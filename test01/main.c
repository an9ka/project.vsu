/*
 * name    calculator
 * author  Anna Semenova
 * version 2.0
 */

<<<<<<< HEAD

=======
>>>>>>> branch 'master' of https://github.com/an9ka/project.vsu
#include <stdio.h>
#include <stdlib.h>

int main(void){

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    float firstnum, secondnum, var1, var2;
    float *vec1, *vec2, res;
    char sign = '+', S;
    int repeat = 1;
    int size, select;
<<<<<<< HEAD
    while(repeat == 1){ //Запускается цикл, благодаря которому мы можем выбирать повторить нам заново режим и операции или нет.
        printf("Select a mode('number operation'-tap 1, 'vector operation'-tap 2):\n"); //Выбор между вектроными и арифм. операц.
        scanf("%i", &select);
        if (select == 1){ //При выборе 1 запускается операция с числами.
            printf("Select the first number:"); //первое число.
            scanf("%f", &firstnum);
            printf("Select the sign(+-*/^!):"); //Знак операции
            scanf(" %c%*c", &sign);
            //Предлагаем выбрать второе число
=======
    while(repeat == 1){                             //можем выбирать повторить нам заново режим и операции или нет. запуск цикла
        printf("Select a mode('number operation'-tap 1, 'vector operation'-tap 2):\n");    //выбор между вектроными и арифм. операц.
        scanf("%i", &select);
        if (select == 1){                                  //операция  с   числами
            printf("Select the first number:");          //первое число.
            scanf("%f", &firstnum);
            printf("Select the sign(+-*/^!):");                    //Знак операции
            scanf(" %c%*c", &sign);
                                           //Предлагаем выбрать второе число
>>>>>>> branch 'master' of https://github.com/an9ka/project.vsu
            if (sign == '+'){
                printf("Select the second number:\n");
                scanf("%f", &secondnum);
                printf("Result: %f\n", firstnum+secondnum);
            }
            else if (sign == '-')
            {
                printf("Select the second number:\n");
                scanf("%f", &secondnum);
                printf("Result: %f\n", firstnum-secondnum);
            }
            if (sign == '*')
            {
                     printf("Select the second number:\n");
                     scanf("%f", &secondnum);
                     printf("Result: %f\n", firstnum*secondnum);
                 }
            else if (sign == '/')
            {
                     printf("Select the second number:\n");
                     scanf("%f", &secondnum);
                     if( secondnum == 0){
                         printf("Wrong! ");}
                     else {
                         printf("Result: %f\n", firstnum/secondnum);
                     }
                 }
            if (sign == '^')
            {
                printf("Select the second number:\n");
                scanf("%f", &secondnum);
                var1=1;
                var2=1;
                for(int var1=1; var1<=secondnum; var1++){
                    var1=var2;
                    var2=var1*firstnum;}
                printf("Result: %f\n", var2);

            }
            else if (sign == '!')
            {
                var1=0;
                var2=1;
                for(int i=1; i<=firstnum; i++){
                    var2=var2*i;
                    var1=var2;}
                    printf("Result: %f\n", var2);}
            else
            {
                printf("Please select the sign again(+-*/^): \n");
            }
        }
<<<<<<< HEAD
        else if(select == 2){ //При выборе 2 запускается векторна операция.
            printf("Enter the size of the vectors: "); //Выбираем размер вектора.
            scanf("%i", &size);
            vec1 = calloc(size,sizeof(float));
            for (int i=0; i<size; i++){
                printf("Enter the first vector: "); //Выбираем первый вектор.
                scanf("%f", &vec1[i]); }
            vec2 = calloc(size,sizeof(float));
            for (int i=0; i<size; i++){
                printf("Enter the second vector: "); //Выбираем второй вектор.
                scanf("%f", &vec2[i]); }
            printf("Select the sign(+-*):"); //Выбираем знак.
            scanf(" %c%*c", &S);
            switch(S)
            {
            case '+':
               for (int i = 0; i < size; i++){
               printf("%f", vec1[i] + vec2[i]);}
               break;
            case '-':
               for (int i = 0; i < size; i++){
               printf("%f", vec1[i] - vec2[i]);}
               break;
            case '*':
                for (int i = 0; i < size; i++){
                res += vec1[i] * vec2[i];}
                printf("Result: %f\n", res);
                break;
            }
        }
        else{
            printf("Please select a mode again: 1 - num., 2 - vec: \n");
        }
    printf("Do you want to continue? ('Yes'-tap 1, 'No'- tap 0): \n");
    scanf(" %i", &repeat);
    }
    free(vec1);
=======
        else if(select == 2){                                      //если выбрали, то запускаетя 2 векторная операция
            printf("Vvedite the size of the vectors: ");             //выбор размера вектора
            scanf("%i", &size);
            vec1 = calloc(size,sizeof(float));
            for (int i=0; i<size; i++){
                printf("Vvedite pervyy vectors: ");                  //выбор первого вектора 
                scanf("%f", &vec1[i]); }
            vec2 = calloc(size,sizeof(float));
            for (int i=0; i<size; i++){
                printf("Vvedite sleduyushchiy vectors: ");                //выбор второго вектора
                scanf("%f", &vec2[i]); }
            printf("Select the sign(+-*):");                        //предлагаем выбрать знак операции
            scanf(" %c%*c", &S);                                  //ввод знака операции
            switch(S)
            {
            case '+':
               for (int i = 0; i < size; i++){
               printf("%f", vec1[i] + vec2[i]);}
               break;
            case '-':
               for (int i = 0; i < size; i++){
               printf("%f", vec1[i] - vec2[i]);}
               break;
            case '*':
                for (int i = 0; i < size; i++){
                res += vec1[i] * vec2[i];}
                printf("Result: %f\n", res);
                break;
            }
        }
        else{
            printf("Kakoi regim next?: 1 - num., 2 - vec: \n");
        }
    printf("Hotite prodolgit'? ('Yes'-tap 1, 'No'- tap 0): \n");
    scanf(" %i", &repeat);
    }
    free(vec1); //освобождение памяти
>>>>>>> branch 'master' of https://github.com/an9ka/project.vsu
    free(vec2);
    return 0;
}
<<<<<<< HEAD


=======
>>>>>>> branch 'master' of https://github.com/an9ka/project.vsu
