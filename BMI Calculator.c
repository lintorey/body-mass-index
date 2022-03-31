#include <stdio.h>;
#include <stdlib.h>;

//function prototype
double calculateBMI(double weight, double height);

int main(void) {
    //local variable declaration
    double weight, height;
    double BMI;
    int num, i;
    char name [50];
    printf("\n\t\t\t\t--------------------------------------");
    printf ("\n\t\t\t\t\tBMI Index Calculator"); //Calculation of body mass index (BMI)
    printf("\n\t\t\t\t--------------------------------------");
    printf("\n");
    //get no of people who want to use this calculator
    printf("\nEnter the number of people who want to calculate BMI : ");
    scanf("%d", &num);
    printf("\n");
    //looping
    for (i = 0; i &lt; num; i++) {
    printf("\nBMI %d: ", i+1);
    printf("\n");

    gets(name);
    display(name);
    printf("\nEnter your weight(in kgs) : ", weight); //Input your weight in kilograms here

    scanf(" %lf", &weight);
    getchar();
    printf("\nEnter your height(in cm) : ", height); //Input your height in centimeters here
    scanf(" %lf", &height);
    getchar();
    BMI = calculateBMI(weight, height); //function call
}
    printf("\nYour Body Mass Index : %lf\n", BMI); //print the result

    if(BMI < 15){
        printf("\nYour BMI category is : Starvation\n");
    }
    else if(BMI >= 15.1 && BMI <= 17.5) {
        printf("\nYour BMI category is : Anorexic\n");
    }
    else if(BMI >= 17.6 && BMI <= 18.5){
        printf("\nYour BMI category is : Underweight\n");
    }
    else if(BMI >= 18.6 && BMI <= 24.9){
        printf("\nYour BMI category is : Ideal\n");
    }
    else if(BMI >= 25 &amp;&amp; BMI <= 25.9){
        printf("\nYour BMI category is : Overweight\n");
    }
    else if(BMI >= 30 && BMI <= 30.9){
        printf("\nYour BMI category is : Obese\n");
    }
    else if(BMI >= 40){
        printf("\nYour BMI category is : Morbidly Obese\n");
    }
        printf("\n--------------------------------------");
}
    printf("\nThank You Using Our BMI Calculator, Bye !");
    return 0;
}

    //function defination
    double calculateBMI(double weight, double height){
        //local variable declaration
        const double cmTOm = 0.01;
        double bmi;
        //height in meters
        height = height * cmTOm;
        //bmi calculation
        bmi = (weight)/(height * height);
        return bmi;
    }

    //function defination
    void display(char* nm) {
        printf("\nNickName : ");
        scanf("%s", &nm);
    }