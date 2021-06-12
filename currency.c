#include<stdio.h>
#include<stdlib.h>
int main(){

float Austr, china, hongkong, india, malaysia, newzealand, nigeria, singapore, USD ;

float curr;
int dummy;
char c;
int choice1,choice2;

do{


printf("Enter currency: ");
scanf("%f",&curr);

printf(" 1: Australia_dollar \n 2: chinese_yuan \n 3: Hongkong \n 4: india \n 5: malaysia \n 6: Newzealand \n 7: Nigeria \n 8: singapore \n 9: USD \n 10: Exit");
printf("\n");

   printf("select choice1: ");
   scanf("%d",&choice1);

   printf("select choice2: ");
   scanf("%d",&choice2);

//Australia to all countries convert the currencies


   if(choice1==1 && choice2==2){
        china = 4.95;
    Austr = curr*china;
    printf(" Australia to china: %f",Austr);//austra 1= china 4.95
   }
   else if(choice1==1 && choice2==3){
        hongkong = 6.00;
    Austr = curr*hongkong;
    printf("Australia to hongkong: %f",Austr);//Austra 1 = hongkong 6.00
   }
    else if(choice1==1 && choice2==4){
        india = 56.63;
    Austr = curr*india;
    printf("Australia to india: %f",Austr);//Austra 1 = india 56.63
   }
    else if(choice1==1 && choice2==5){
        malaysia = 3.20;
    Austr = curr*malaysia;
    printf("Australia to malaysia: %f",Austr);//Austra 1 = malasiya 3.20
   }
    else if(choice1==1 && choice2==6){
        newzealand = 1.07;
    Austr = curr*newzealand;
    printf("Australia to newzealand: %f",Austr);//Austra 1 = newzealand 1.07
   }
    else if(choice1==1 && choice2==7){
        nigeria = 318.55;
    Austr = curr*nigeria;
    printf("Australia to nigeria: %f",Austr);//Austra 1 = nigeria 318.55
   }
    else if(choice1==1 && choice2==8){
        singapore = 1.02;
    Austr = curr*singapore;
    printf("Australia to singapore: %f",Austr);//Austra 1 = singapore 1.02
   }
    else if(choice1==1 && choice2==9){
        USD =0.77;
    Austr = curr*USD;
    printf("Australia to USD: %f",Austr);//Austra 1 = USD 0.77
   }
   else
   printf("\n");

//chinese to all countries convert the currencies

 if(choice1==2 && choice2==1){
        Austr = 0.20;
    china = curr*Austr;
    printf(" china to Australia: %f",china);//china 1= austr 0.20
   }
   else if(choice1==2 && choice2==3){
        hongkong = 1.21;
    china = curr*hongkong;
    printf("china to hongkong: %f",china);//china 1 = hongkong 1.21
   }
    else if(choice1==2 && choice2==4){
        india = 11.44;
    china = curr*india;
    printf("china to india: %f",china);//china 1 = india 11.44
   }
    else if(choice1==2 && choice2==5){
        malaysia = 0.64;
    china = curr*malaysia;
    printf("china to malaysia: %f",china);//china 1 = malasiya 0.64
   }
    else if(choice1==2 && choice2==6){
        newzealand = 0.22;
    china = curr*newzealand;
    printf("china to newzealand: %f",china);//chinaa 1 = newzealand 0.22
   }
    else if(choice1==2 && choice2==7){
        nigeria = 64.35;
    china = curr*nigeria;
    printf("china to nigeria: %f",china);//china 1 = nigeria 64.35
   }
    else if(choice1==2 && choice2==8){
        singapore = 0.21;
    china = curr*singapore;
    printf("china to singapore: %f",china);//china 1 = singapore 0.21
   }
    else if(choice1==2 && choice2==9){
        USD =0.16;
    china = curr*USD;
    printf("china to USD: %f",china);//china 1 = USD 0.16
   }
   else
   printf("\n");

   //Hongkong to all countries convert the currencies

 if(choice1==3 && choice2==1){
        Austr = 0.17;
    hongkong = curr*Austr;
    printf(" Hongkong to Australia: %f",hongkong);//hongkong 1= austr 0.17
   }
   else if(choice1==3 && choice2==2){
        china = 0.82;
    hongkong = curr*china;
    printf("Hongkong to china: %f",hongkong);//hongkong 1 = china 0.82
   }
    else if(choice1==3 && choice2==4){
        india = 9.43;
    hongkong = curr*india;
    printf("Hongkong to india: %f",hongkong);//hongkong 1 = india 9.43
   }
    else if(choice1==3 && choice2==5){
        malaysia = 0.53;
    hongkong = curr*malaysia;
    printf("Hongkong to malaysia: %f",hongkong);//hongkong 1 = malasiya 0.53
   }
    else if(choice1==3 && choice2==6){
        newzealand = 0.18;
    hongkong = curr*newzealand;
    printf("Hongkong to newzealand: %f",hongkong);//hongkong 1 = newzealand 0.18
   }
    else if(choice1==3 && choice2==7){
        nigeria = 53.05;
    hongkong = curr*nigeria;
    printf("Hongkong to nigeria: %f",hongkong);//hongkong 1 = nigeria 53.05
   }
    else if(choice1==3 && choice2==8){
        singapore = 0.17;
    hongkong = curr*singapore;
    printf("Hongkong to singapore: %f",hongkong);//hongkong 1 = singapore 0.17
   }
    else if(choice1==3 && choice2==9){
        USD =0.13;
    hongkong = curr*USD;
    printf("Hongkong to USD: %f",hongkong);//hongkong 1 = USD 0.13
   }
   else
   printf("\n");
//india to all countries

if(choice1==4 && choice2==1){
        Austr = 0.018;
    india = curr*Austr;
    printf(" India to Australia: %f",india);//india 1= austr 0.018
   }
   else if(choice1==4 && choice2==2){
        china = 0.087;
    india = curr*china;
    printf("India to china: %f",india);//india 1 = china 0.087
   }
    else if(choice1==4 && choice2==3){
        hongkong = 0.11;
    india = curr*hongkong;
    printf("India to hongkong: %f",india);//india 1 = hongkong 0.11
   }
    else if(choice1==4 && choice2==5){
        malaysia = 0.056;
    india = curr*malaysia;
    printf("India to malaysia: %f",india);//india 1 = malasiya 0.056
   }
    else if(choice1==4 && choice2==6){
        newzealand = 0.019;
    india = curr*newzealand;
    printf("India to newzealand: %f",india);//india 1 = newzealand 0.019
   }
    else if(choice1==4 && choice2==7){
        nigeria = 5.63;
    india = curr*nigeria;
    printf("India to nigeria: %f",india);//india 1 = nigeria 5.63
   }
    else if(choice1==4 && choice2==8){
        singapore = 0.018;
    india = curr*singapore;
    printf("India to singapore: %f",india);//india 1 = singapore 0.018
   }
    else if(choice1==4 && choice2==9){
        USD =0.14;
    india = curr*USD;
    printf("India to USD: %f",india);//india 1 = USD 0.014
   }
   else
   printf("\n");

   //malaysia to all countries

if(choice1==5 && choice2==1){
        Austr = 0.31;
    malaysia = curr*Austr;
    printf(" Malaysia to Australia: %f",malaysia);//malaysia 1= austr 0.31
   }
   else if(choice1==5 && choice2==2){
        china = 1.55;
    malaysia = curr*china;
    printf("Malaysia to china: %f",malaysia);//malaysia 1 = china 1.55
   }
    else if(choice1==5 && choice2==3){
        hongkong = 1.88;
    malaysia = curr*hongkong;
    printf("Malaysia to hongkong: %f",malaysia);//malaysia 1 = hongkong 1.88
   }
    else if(choice1==5 && choice2==4){
        india = 17.74;
    malaysia = curr*india;
    printf("Malaysia to india: %f",malaysia);//malaysia 1 = india  17.74
   }
    else if(choice1==5 && choice2==6){
        newzealand = 0.34;
    malaysia = curr*newzealand;
    printf("Malaysia to newzealand: %f",malaysia);//malaysia 1 = newzealand 0.34
   }
    else if(choice1==5 && choice2==7){
        nigeria = 99.69;
    malaysia = curr*nigeria;
    printf("Malaysia to nigeria: %f",malaysia);//malaysia 1 = nigeria 99.69
   }
    else if(choice1==5 && choice2==8){
        singapore = 0.32;
    malaysia = curr*singapore;
    printf("Malaysia to singapore: %f",malaysia);//malaysia 1 = singapore 0.32
   }
    else if(choice1==5 && choice2==9){
        USD =0.24;
    malaysia = curr*USD;
    printf("Malaysia to USD: %f",malaysia);//malaysia 1 = USD 0.24
   }
   else
   printf("\n");

//Newzealand to all countries

if(choice1==6 && choice2==1){
        Austr = 0.93;
    newzealand = curr*Austr;
    printf(" Newzealand to Australia: %f",newzealand);//newzealand 1= austr 0.93
   }
   else if(choice1==6 && choice2==2){
        china = 1.55;
    newzealand = curr*china;
    printf("Newzealand to china: %f",newzealand);//newzealand 1 = china 4.61
   }
    else if(choice1==6 && choice2==3){
        hongkong = 1.88;
    newzealand = curr*hongkong;
    printf("Newzealand to hongkong: %f",newzealand);//newzealand 1 = hongkong 5.60
   }
    else if(choice1==6 && choice2==4){
        india = 52.77;
    newzealand = curr*india;
    printf("Newzealand to india: %f",newzealand);//newzealand 1 = india 52.77
   }
    else if(choice1==6 && choice2==5){
        newzealand = 2.98;
    newzealand = curr*newzealand;
    printf("Newzealand to malasiya: %f",newzealand);//newzealand 1 = malaysia 2.98
   }
    else if(choice1==6 && choice2==7){
        nigeria = 296.88;
    newzealand = curr*nigeria;
    printf("Newzealand to nigeria: %f",newzealand);//newzealand 1 = nigeria 296.88
   }
    else if(choice1==6 && choice2==8){
        singapore = 0.96;
    newzealand = curr*singapore;
    printf("Newzealand to singapore: %f",newzealand);//newzealand 1 = singapore 0.96
   }
    else if(choice1==6 && choice2==9){
        USD =0.72;
    newzealand = curr*USD;
    printf("Newzealand to USD: %f",newzealand);//newzealand 1 = USD 0.72
   }
   else
   printf("\n");

// nigeria to all countries

if(choice1==7 && choice2==1){
        Austr = 0.0031;
    nigeria = curr*Austr;
    printf(" Nigeria to Australia: %f",nigeria);//nigeria 1= austr 0.0031
   }
   else if(choice1==7 && choice2==2){
        china = 0.016;
    nigeria = curr*china;
    printf("Nigeria to china: %f",nigeria);//nigeria 1 = china 0.016
   }
    else if(choice1==7 && choice2==3){
        hongkong = 0.019;
    nigeria = curr*hongkong;
    printf("Nigeria to hongkong: %f",nigeria);//nigeria 1 = hongkong 0.019
   }
    else if(choice1==7 && choice2==4){
        india = 0.18;
    nigeria = curr*india;
    printf("Nigeria to india: %f",nigeria);//nigeria 1 = india 0.18
   }
    else if(choice1==7 && choice2==5){
        malaysia = 0.010;
    nigeria = curr*malaysia;
    printf("Nigeria to malaysia: %f",nigeria);//nigeria 1 = malaysia 0.010
   }
    else if(choice1==7 && choice2==6){
        newzealand = 0.0034;
    nigeria = curr*nigeria;
    printf("Nigeria to newzealand: %f",nigeria);//nigeria 1 = newzealand 0.0034
   }
    else if(choice1==7 && choice2==8){
        singapore = 0.0032;
    nigeria = curr*singapore;
    printf("Nigeria to singapore: %f",nigeria);//nigeria 1 = singapore 0.0032
   }
    else if(choice1==7 && choice2==9){
        USD =0.0024;
    nigeria = curr*USD;
    printf("Nigeria to USD: %f",nigeria);//nigeria 1 = USD 0.0024
   }
   else
   printf("\n");


// singapore to all countries

if(choice1==8&& choice2==1){
        Austr = 0.98;
    singapore = curr*Austr;
    printf(" Singapore to Australia: %f",singapore);//singapore 1= austr 0.98
   }
   else if(choice1==8&& choice2==2){
        china = 4.83;
    singapore = curr*china;
    printf("Singapore to china: %f",singapore);//singapore 1 = china 4.83
   }
    else if(choice1==8&& choice2==3){
        hongkong = 5.86;
    singapore = curr*hongkong;
    printf("Singapore to hongkong: %f",singapore);//singapore 1 = hongkong 5.86
   }
    else if(choice1==8&& choice2==4){
        india = 55.23;
    singapore = curr*india;
    printf("Singapore to india: %f",singapore);//singapore 1 = india 55.23
   }
    else if(choice1==8&& choice2==5){
        malaysia = 3.12;
    singapore = curr*malaysia;
    printf("Singapore to malaysia: %f",singapore);//singapore 1 = malaysia 3.12
   }
    else if(choice1==8&& choice2==6){
        newzealand = 1.05;
    singapore = curr*newzealand;
    printf("Singapore to newzealand: %f",singapore);//singapore 1 = newzealand 1.05
   }
    else if(choice1==8&& choice2==7){
        nigeria = 310.69;
    singapore = curr*nigeria;
    printf("Singapore to nigeria: %f",singapore);//singapore 1 = nigeria 310.69
   }
    else if(choice1==8&& choice2==9){
        USD =0.76;
    singapore = curr*USD;
    printf("Singapore to USD: %f",singapore);//singapore 1 = USD 0.76
   }
   else
   printf("\n");

   // USD to all countries

if(choice1==9&& choice2==1){
        Austr = 1.29;
    USD = curr*Austr;
    printf(" USD to Australia: %f",USD);//USD 1= austr 1.29
   }
   else if(choice1==9&& choice2==2){
        china = 6.40;
    USD = curr*china;
    printf("USD to china: %f",USD);//USD 1 = china 6.40
   }
    else if(choice1==9&& choice2==3){
        hongkong = 7.76;
    USD = curr*hongkong;
    printf("USD to hongkong: %f",USD);//USD 1 = hongkong 7.76
   }
    else if(choice1==9&& choice2==4){
        india = 73.15;
    USD = curr*india;
    printf("USD to india: %f",USD);//USD 1 = india 73.15
   }
    else if(choice1==9&& choice2==5){
        malaysia = 3.12;
    USD = curr*malaysia;
    printf("USD to malaysia: %f",USD);//USD 1 = malaysia 4.13
   }
    else if(choice1==9&& choice2==6){
        newzealand = 1.39;
    USD = curr*newzealand;
    printf("USD to newzealand: %f",USD);//USD 1 = newzealand 1.39
   }
    else if(choice1==9&& choice2==7){
        nigeria = 411.50;
    USD = curr*nigeria;
    printf("USD to nigeria: %f",USD);//USD 1 = nigeria 411.50
   }
    else if(choice1==9&& choice2==8){
        singapore =1.32;
    USD = curr*singapore;
    printf("USD to singapore: %f",USD);//USD 1 = singapore 1.32
   }
   else
   printf("\n");



printf("Enter your currency ?");
scanf("%d",dummy);
scanf("%c",&c);
}while(c=='y');


return 0;
}




