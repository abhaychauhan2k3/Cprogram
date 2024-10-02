/*
(1)kilometers to miles(1 km=0.62 miles)
(2)inches to foot (1 inch = 0.0833 foot)
(3)cm to inches 
(4)pounds to kg 
(5)inches to meter)
*/

#include <stdio.h>
int main(){
int con;
printf("Enter the number of conversion you wanna do:\n\n(1)kilometers to miles(1 km=0.62 miles)\n\n(2)inches to foot (1 inch = 0.0833 foot)\n\n(3)cm to inches\n\n(4)pounds to kg\n\n(5)inches to meter)\n");
scanf("%d",&con);
if (con == 1){
    int km;
    printf("Enter the value in KILOMETERS:");
    scanf("%d",&km);
    float miles= (float)km*0.62;
    printf("%d kilometer = %f miles",km,miles);
}
else if(con == 2){
    int inch;
    printf("Enter the value in inches:");
    scanf("%d",&inch);
    float foot=(float)inch*0.083;
    printf("%d inch = %f foot",inch,foot);
}
else if(con == 3){
    int cm;
    printf("Enter the value in centimeters:");
    scanf("%d",&cm);
    float inches=(float)cm*0.39;
    printf("%d centimetrs = %f inches",cm,inches);
}
else if(con == 4){
    int pounds;
    printf("Enter the value in pounds :");
    scanf("%d",&pounds);
    float kg =(float)pounds*0.45;
    printf("%d pounds = %f kg",pounds,kg);

}
else if(con==5){
    int inches;
    printf("Enter the value in inches :");
    scanf("%d",&inches);
    float meter=(float)inches*39.37;
    printf("%d inches = %f meters ",inches,meter);
}
else {
    printf("Enter a valid conversion.");
}
    
return 0;
    
}