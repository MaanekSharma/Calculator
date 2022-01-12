#include <stdio.h>
#include <math.h>

int main(void) {
  char choice,operation,unary,var,aChoice,aChoiceB;
  float min,max,rem,varval,varOrNum,num1=0, num2=0;
  float a,b,c,d,e;

  puts("Welcome to my Command-Line Calculator (CLC) \nDeveloper: Maanek Sharma \nVersion: 3 \n------------------ ");

  puts("select one of the following items: \nB) - Binary Mathematical operations, such as addition and subtraction. \nU) - Unary Mathematical operations, such as square root, and log. \nA) - Advances Mathematical operations, using variables, arrays. \nV) - (a-e) Define variables and assign them values. \nE) - Exit\n");
  
  while(choice!='e'||choice!='E'){
    
    puts("Please select from these ( B , U , A , V , E )");
    scanf("%s",&choice);
    
    if(choice=='b' || choice=='B'){
      
      printf("Enter the first number:\n");
      while(scanf("%f", &num1)==0){
        printf("Invalid input...\nEnter the first number: ");
        scanf("%*s");
      }
      
      puts("Please enter the operation ( + , - , * , / , % , P (for power) , X (for maximum) , I (for minimum)):");
      scanf("%s",&operation);
      while(operation!='+' && operation!='-' && operation!='*' && operation!='/'&& operation!='%' && operation!='P' && operation!='p' && operation!='X' && operation!='x' && operation!='I' && operation!='i'){
        puts("Please enter the operation ( + , - , * , / , % , P (for power) , X (for maximum) , I (for minimum)):");
        scanf("%s",&operation);
      }
      
      printf("Enter the second number: ");
      while(scanf("%f", &num2)==0){
        printf("Invalid input...\nEnter the second number: ");
        scanf("%*s");
      }
   
        if(operation=='+'){
          printf("The result is \t%.2f\n",(float)num1+(float)num2);
        }
        
        if(operation=='-'){
          printf("The result is \t%.2f\n",(float)num1-(float)num2);
        }
        
        if(operation=='/'){
          while(num2==0){
            puts("Please enter the second number: (non-zero)");
            scanf("%f",&num2);
          }
            printf("The result is \t%.2f\n",(float)num1/(float)num2);
        }
        
        if(operation=='*'){
          printf("The result is \t%.2f\n",(float)num1*(float)num2);
        }
        
        if(operation=='%'){
          printf("The result is \t%.2f\n",fmod((float)num1,(float)num2));
        }
        
        if(operation=='P' || operation=='p'){
          printf("The result is \t%.2f\n",powf((float)num1,(float)num2));
        }
        
        if(operation=='I'|| operation=='i'){
          min=num1;
          if (num2<num1){
            min=num2;
            printf("The result is \t%.2f\n",min);
          }
          else{
            printf("The result is \t%.2f\n",min);
          }
        }

        if( operation=='X'|| operation=='x'){
          max=num1;
          if (num1<num2){
            max=num2;
            printf("The result is \t%.2f\n",max);
          }
          else{
            printf("The result is \t%.2f\n",max);
          }
        }
    }
         
    if (choice=='u'||choice=='U'){
      puts("Please enter the operation ( S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) , F (for floor) ):");
      scanf("%s",&unary);
      while(unary!='s' && unary!='S' && unary!='l' && unary!='l'&& unary!='e' && unary!='E' && unary!='c' && unary!='C' && unary!='f' && unary!='F' ){
        puts("Please enter the operation ( S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) , F (for floor) ):");
        scanf("%s",&unary);
      }//unary switch 

      if(unary=='s'||unary=='S'){
        puts("Please enter a number:");
        while(scanf("%f", &num1)==0){
          puts("Please enter a number:");
          scanf("%*s");
        }
        printf("The result is \t%.2f\n",sqrt(num1));
      }
      if(unary=='l'||unary=='L'){
        puts("Please enter a number:");
        while(scanf("%f", &num1)==0){
          puts("Please enter a number:");
          scanf("%*s");
        }
        printf("The result is \t%.2f\n",log(num1));
      }
      if(unary=='e'||unary=='E'){
        puts("Please enter a number:");
        while(scanf("%f", &num1)==0){
          puts("Please enter a number:");
          scanf("%*s");
        }
        printf("The result is \t%.2f\n",exp(num1));
      }
      if(unary=='c'||unary=='C'){
        puts("Please enter a number:");
        while(scanf("%f", &num1)==0){
          puts("Please enter a number:");
          scanf("%*s");
        }
        printf("The result is \t%.2f\n",ceil(num1));
      }
      if(unary=='f'||unary=='F'){
        puts("Please enter a number:");
        while(scanf("%f", &num1)==0){
          puts("Please enter a number:");
          scanf("%*s");
        }
        printf("The result is \t%.2f\n",floor(num1));
      }
    }

    if(choice=='v'||choice=='V'){
      printf("Please enter the name of the variable ( A single character between 'a' to 'e' ):\n");
      scanf("%s",&var);
      while(var!='a' && var!='A' && var!='b' && var!='B'&& var!='c' && var!='C' && var!='d' && var!='D' && var!='e' && var!='E'){
        printf("Please enter the name of the variable ( A single character between 'a' to 'e' ):\n");
        scanf("%s",&var);
      }

      if(var=='a' || var=='A'){
        puts("Please enter a value to assign to the variable:");
        while(scanf("%f", &varval)==0){
          puts("Please enter a value to assign to the variable:");
          scanf("%*s");
        }
        a=varval;
        printf("Variable a is set to:\t%.2f\n",a);
      }
      if(var=='b' || var=='B'){
        puts("Please enter a value to assign to the variable:");
        while(scanf("%f", &varval)==0){
          puts("Please enter a value to assign to the variable:");
          scanf("%*s");
        }
        b=varval;
        printf("Variable b is set to:\t%.2f\n",b);
      }
      if(var=='c' || var=='C'){
        puts("Please enter a value to assign to the variable:");
        while(scanf("%f", &varval)==0){
          puts("Please enter a value to assign to the variable:");
          scanf("%*s");
        }
        c=varval;
        printf("Variable c is set to:\t%.2f\n",c);
      }
      if(var=='d' || var=='D'){
        puts("Please enter a value to assign to the variable:");
        while(scanf("%f", &varval)==0){
          puts("Please enter a value to assign to the variable:");
          scanf("%*s");
        }
        d=varval;
        printf("Variable d is set to:\t%.2f\n",d);
      }
      if(var=='e' || var=='e'){
        puts("Please enter a value to assign to the variable:");
        while(scanf("%f", &varval)==0){
          puts("Please enter a value to assign to the variable:");
          scanf("%*s");
        }
        e=varval;
        printf("Variable e is set to:\t%.2f\n",e);
      }
    }
      
    if (choice=='a' || choice=='A'){

      printf("Select one of the following:\nB) - Binary Mathematical Operations, such as addition and subtraction.\nU) - Unary Mathematical Operations, such as square root, and log.\nE) - Exit and back to the main menu.\n");
      
      while (aChoice!='E' || aChoice!='e'){
        
        printf("Select one of the following(B, U, E): ");
        scanf("%s", &aChoice);
        
        if (aChoice=='B' || aChoice=='b' ){
          
          printf("Would you like to use a variable (1) or a number (2): ");
          scanf("%f", &varOrNum);
          while(varOrNum!=1 && varOrNum!=2 ){
            printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
          }
          
          if (varOrNum==2){
            printf("Enter the first number: ");
            while(scanf("%f", &num1)==0){
              printf("Invalid input...\nEnter the first number: ");
              scanf("%*s");
            }
          }

          if (varOrNum==1){
            printf("Enter the first variable: ");
            scanf("%s",&var);
            while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
              printf("Invalid input...\nEnter a valid character (a-e): ");
              scanf("%s",&var);
            }
            if(var=='a' || var=='A' ){
              num1=a;
            }
            else if(var=='b' || var=='B'){
              num1=b;
            }
            else if(var=='c' || var=='C'){
              num1=c;
            }
            else if(var=='d' || var=='D'){
              num1=d;
            }
            else if(var=='e' || var=='E'){
              num1=e;
            }
          }
          
          puts("Please enter the operation ( + , - , * , / , % , P (for power) , X (for maximum) , I (for minimum)):");
          scanf("%s", &operation);
          
          while(operation!='+' && operation!='-' && operation!='*' && operation!='/' && operation!='P' && operation!='X' && operation!='I' && operation!='p' && operation!='x' && operation!='i'){
            puts("Invalid input...\nPlease enter the operation ( + , - , * , / , % , P (for power) , X (for maximum) , I (for minimum)): ");
            scanf("%s", &operation);
          }
          
          if (operation=='+'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the second number: ");
              while(scanf("%f", &num2)==0){
                printf("Invalid input...\nEnter the first number: ");
                scanf("%*s");
              }
            }
            if (varOrNum==1){
              printf("Enter the second variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num2=a;
              }
              else if(var=='b' || var=='B'){
                num2=b;
              }
              else if(var=='c' || var=='C'){
                num2=c;
              }
              else if(var=='d' || var=='D'){
                num2=d;
              }
              else if(var=='e' || var=='E'){
                num2=e;
              }
            }
            printf("%.2f\n",num1+num2);
          }

          if (operation=='-'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }

            if (varOrNum==2){
              printf("Enter the second number: ");
              while(scanf("%f", &num2)==0){
                printf("Invalid input...\nEnter the first number: ");
                scanf("%*s");
              }
            }

            if (varOrNum==1){
              printf("Enter the second variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num2=a;
              }
              else if(var=='b' || var=='B'){
                num2=b;
              }
              else if(var=='c' || var=='C'){
                num2=c;
              }
              else if(var=='d' || var=='D'){
                num1=d;
              }
              else if(var=='e' || var=='E'){
                num2=e;
              }
            }
            printf("%.2f\n",num1-num2);
          }

          if (operation=='*'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the second number: ");
              while(scanf("%f", &num2)==0){
                printf("Invalid input...\nEnter the first number: ");
                scanf("%*s");
                }
              }
            if (varOrNum==1){
              printf("Enter the second variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num2=a;
              }
              else if(var=='b' || var=='B'){
                num2=b;
              }
              else if(var=='c' || var=='C'){
                num2=c;
              }
              else if(var=='d' || var=='D'){
                num2=d;
              }
              else if(var=='e' || var=='E'){
                num2=e;
              }
            }
            printf("%.2f\n",num1*num2);
          }

          if (operation=='/'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }

            if (varOrNum==2){
              printf("Enter the second number: ");
              while(scanf("%f", &num2)==0 || num2==0){
              printf("Invalid input...\nEnter the second number: ");
              scanf("%*s");
              }
            }

            if (varOrNum==1){
              printf("Enter the second variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num2=a;
              }
              else if(var=='b' || var=='B'){
                num2=b;
              }
              else if(var=='c' || var=='C'){
                num2=c;
              }
              else if(var=='d' || var=='D'){
                num2=d;
              }
              else if(var=='e' || var=='E'){
                num2=e;
              }
            }
            printf("%.2f\n",num1/num2);
          }

          if (operation=='P' || operation=='p'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the second number: ");
              while(scanf("%f", &num2)==0){
              printf("Invalid input...\nEnter the first number: ");
              scanf("%*s");
              }
            }
            if (varOrNum==1){
              printf("Enter the second variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num2=a;
              }
              else if(var=='b' || var=='B'){
                num2=b;
              }
              else if(var=='c' || var=='C'){
                num2=c;
              }
              else if(var=='d' || var=='D'){
                num2=d;
              }
              else if(var=='e' || var=='E'){
                num2=e;
              }
            }
            printf("%.2lf\n",pow(num1,num2));
          }

          if (operation=='X' || operation=='x'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the second number: ");
              while(scanf("%f", &num2)==0){
              printf("Invalid input...\nEnter the first number: ");
              scanf("%*s");
              }
            }
            if (varOrNum==1){
              printf("Enter the second variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num2=a;
              }
              else if(var=='b' || var=='B'){
                num2=b;
              }
              else if(var=='c' || var=='C'){
                num2=c;
              }
              else if(var=='d' || var=='D'){
                num2=d;
              }
              else if(var=='e' || var=='E'){
                num2=e;
              }
            }
            if (num1>num2){
              printf("The result is: %.2f\n", num1);
            }
            else if (num1<num2){
              printf("The result is: %.2f\n", num2);
            }
          }

          if (operation=='I' || operation=='i'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the second number: ");
              while(scanf("%f", &num2)==0){
                printf("Invalid input...\nEnter the first number: ");
                scanf("%*s");
                }
              }
            if (varOrNum==1){
              printf("Enter the second variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num2=a;
              }
              else if(var=='b' || var=='B'){
                num2=b;
              }
              else if(var=='c' || var=='C'){
                num2=c;
              }
              else if(var=='d' || var=='D'){
                num2=d;
              }
              else if(var=='e' || var=='E'){
                num2=e;
              }
            }
            if (num1<num2){
              printf("The result is: %.2f\n", num1);
            }
            if (num1>num2){
              printf("The result is: %.2f\n", num2);
            }
          }
        }

        if (aChoice=='U' || aChoice=='u'){
          
          puts("Please enter the operation ( S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) , F (for floor) ):");
          scanf("%s",&operation);
          
          while(operation!='S' && operation!='L' && operation!='E' && operation!='C' && operation!='F' && operation!='s' && operation!='l' && operation!='e' && operation!='c' && operation!='f'){
            puts("Please enter the operation ( S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) , F (for floor) ):");
            scanf("%s", &operation);
          }

          if (operation=='S' || operation=='s'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the first number: ");
              while(scanf("%f", &num1)==0 || num1<0){
                printf("Invalid input...\nEnter the first number: ");
                scanf("%*s");
              }
            }
            if (varOrNum==1){
              printf("Enter the first variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num1=a;
              }
              else if(var=='b' || var=='B'){
                num1=b;
              }
              else if(var=='c' || var=='C'){
                num1=c;
              }
              else if(var=='d' || var=='D'){
                num1=d;
              }
              else if(var=='e' || var=='E'){
                num1=e;
              }
            }
            printf("%.2lf\n", sqrt(num1));
          }

          if (operation=='L' || operation=='l'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the first number: ");
              while(scanf("%f", &num1)==0 || num1<0){
                printf("Invalid input...\nEnter the first number: ");
                scanf("%*s");
              }
            }
            if (varOrNum==1){
              printf("Enter the first variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num1=a;
              }
              else if(var=='b' || var=='B'){
                num1=b;
              }
              else if(var=='c' || var=='C'){
                num1=c;
              }
              else if(var=='d' || var=='D'){
                num1=d;
              }
              else if(var=='e' || var=='E'){
                num1=e;
              }
            }
            printf("%.2lf\n", log(num1));
          }

          if (operation=='E' || operation=='e'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the first number: ");
              while(scanf("%f", &num1)==0){
                printf("Invalid input...\nEnter the first number: ");
                scanf("%*s");
              }
            }
            if (varOrNum==1){
              printf("Enter the first variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num1=a;
              }
              else if(var=='b' || var=='B'){
                num1=b;
              }
              else if(var=='c' || var=='C'){
                num1=c;
              }
              else if(var=='d' || var=='D'){
                num1=d;
              }
              else if(var=='e' || var=='E'){
                num1=e;
              }
            }
            printf("%.2lf\n", exp(num1));
          }

          if (operation=='C' || operation=='c'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the first number: ");
              while(scanf("%f", &num1)==0){
                printf("Invalid input...\nEnter the first number: ");
                scanf("%*s");
              }
            }
            if (varOrNum==1){
              printf("Enter the first variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num1=a;
              }
              else if(var=='b' || var=='B'){
                num1=b;
              }
              else if(var=='c' || var=='C'){
                num1=c;
              }
              else if(var=='d' || var=='D'){
                num1=d;
              }
              else if(var=='e' || var=='E'){
                num1=e;
              }
            }
            printf("%.2lf\n",ceil(num1));
          }

          if (operation=='F' || operation=='f'){
            printf("Would you like to use a variable (1) or a number (2): ");
            scanf("%f", &varOrNum);
            while(varOrNum!=1 && varOrNum!=2 ){
              printf("Invalid input...\nWould you like to use a variable (1) or a number (2): ");
              scanf("%f", &varOrNum);
            }
            if (varOrNum==2){
              printf("Enter the first number: ");
              while(scanf("%f", &num1)==0){
                printf("Invalid input...\nEnter the first number: ");
                scanf("%*s");
              }
            }
            if (varOrNum==1){
              printf("Enter the first variable: ");
              scanf("%s",&var);
              while(var!='a' && var!='b' && var!='c' && var!='d' && var!='e' && var!='A' && var!='B' && var!='C' && var!='D' && var!='E'){
                printf("Invalid input...\nEnter a valid character (a-e): ");
                scanf("%s",&var);
              }
              if(var=='a' || var=='A' ){
                num1=a;
              }
              else if(var=='b' || var=='B'){
                num1=b;
              }
              else if(var=='c' || var=='C'){
                num1=c;
              }
              else if(var=='d' || var=='D'){
                num1=d;
              }
              else if(var=='e' || var=='E'){
                num1=e;
              }
            }
            printf("%.2lf\n",floor(num1));
          }  
        } 
        
        if (aChoice=='E' || aChoice=='e'){
          break;
        }
      }
    }
        
    if (choice=='e' || choice=='E'){
      break;
    }    
  }//while choice isnt E

  if(choice=='e'){
    puts("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!");
  }
  
}//main