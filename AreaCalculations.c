#include<stdio.h>

int main()
{
    // 1st Program
    printf("Program for calculating AREA OF A CIRCLE :\n\n");
    // float pi = 3.14;
    float radius = 2;
    float areaOfCircle;
    areaOfCircle = 3.14 * radius * radius;
    printf("Area of Circle is : %f\n", areaOfCircle);
    printf("Area of Circle is : %.2f\n", areaOfCircle);
    printf("Area of Circle with radius %.0f is : %.2f\n\n", radius,areaOfCircle);
    
    //**********************
    
    // 2nd Program
    printf("Program for calculating AREA OF A TRIANGLE :\n\n");
    int Base = 15;
    int Height = 20;
    int areaOfTriangle;
    areaOfTriangle = (Base * Height)/2;
    printf("Value of Base : %d\n", Base);
    printf("Value of Height : %d\n", Height);
    printf("Area of Triangle with Base & Height is : %d\n\n",areaOfTriangle);
    
    //**********************
    
    // 3rd Program
    printf("Program for calculating AREA OF A RECTANGLE : \n\n");
    int Length = 20;
    float Width = 10.5;
    int areaOfRectangle;
    areaOfRectangle = Length * Width;
    printf("Value of Length : %d\n", Length);
    printf("Value of Width : %.2f\n", Width);
    printf("Area of Rectangle with Length & Width is : %d\n\n", areaOfRectangle);
    
    //**********************
    
    // 4th Program
    printf("Program for calculating AREA OF A PARALLELOGRAM : \n\n");
    int base = 35;
    int height = 14;
    int areaOfParallelogram;
    areaOfParallelogram = base * height;
    printf("Value of Base : %d\n", base);
    printf("Value of Height : %d\n", height);
    printf("Area of Parallelogram with base & width is : %d\n\n", areaOfParallelogram);
    
    //**********************
    
    // 5th Program
    printf("Program for calculating AREA OF A SQUARE : \n\n");
    int side = 45;
    int areaOfSquare;
    areaOfSquare = side * side;
    printf("Value of side Length : %d\n", side);
    printf("Area of Square with its side length is : %d\n\n", areaOfSquare);
    
    //**********************
    
    // 6th Program
    printf("Program for calculating FAHRENHEIT TO CELSIUS CONVERSION : \n\n");
    int Fahrenheit = 70;
    int FahToCelsius;
    FahToCelsius = (Fahrenheit - 32) * 5/9;
    printf("Value of Fahrenheit : %d\n", Fahrenheit);
    printf("The conversion of Fahrenheit to Celsius is : %d\n\n", FahToCelsius);
    
    //**********************
    
    // 7th Program
    printf("Program for calculating SIMPLE INTEREST : \n\n");   
    int Principal_Amount = 2500;
    float Rate_Of_Interest = 19.87;
    int Time = 50;
    int Simple_Interest;
    Simple_Interest = (Principal_Amount * Rate_Of_Interest * Time)/100;
    printf("Value of Principal Amount : %d\n", Principal_Amount);
    printf("Value of Rate Of Interest : %.3f\n", Rate_Of_Interest);
    printf("Value of Time : %d\n", Time);
    printf("The calculated value of Simple Interest is : %d\n\n", Simple_Interest);
    
    //**********************
    
    // 8th Program
    printf("Program for calculating Body Mass Index (BMI) : \n\n");  
    int Weight = 80;
    int Height_cm = 180; // Height in centimeters
    float Height_m = Height_cm / 100.0; // Convert height to meters
    float BMI;
    BMI = Weight / (Height_m * Height_m);
    printf("Value of Weight in kilogram is : %d\n", Weight);
    printf("Value of Height in meters is : %.3f\n", Height_m);
    printf("The calculated Body Mass Index is : %.3f\n\n", BMI);
    
    //**********************
    
    // 9th Program
    printf("Program for calculating Compound Interest : \n\n"); 
    float principal_Amount = 2500;
    float RateOf_Interest = 5;
    float TiMe = 10;
    int Compound_Per_Year = 4;
    float Amount;
    float Compound_Interest;
    RateOf_Interest = RateOf_Interest / 100; // Convert rate to decimal
    Amount = principal_Amount * pow((1 + RateOf_Interest / Compound_Per_Year), Compound_Per_Year * Time);
    Compound_Interest = Amount - principal_Amount;
    printf("Value of Principal Amount : %.2f\n", principal_Amount);
    printf("Value Rate of Interest : %.2f%%\n", RateOf_Interest * 100);
    printf("Value of Time (in years) : %.2f\n", TiMe);
    printf("Value of Compounded : %d times per year\n", Compound_Per_Year);
    printf("Value of Total Amount after interest : %.2f\n", Amount);
    printf("The calculated Compound Interest is : %.2f\n\n", Compound_Interest);
    
    //**********************
    
    // 10th Program
    printf("Program for calculating Gross Salary & Net Salary : \n\n");
    float Basic_Salary = 80000;
    float HRA = 6000;
    float DA = 3000;
    float Deductions = 4000;
    float Gross_Salary;
    float Net_Salary;
    Gross_Salary = Basic_Salary + HRA + DA;
    Net_Salary = Gross_Salary - Deductions;
    printf("Basic Salary : %.2f\n", Basic_Salary);
    printf("HRA : %.2f\n", HRA);
    printf("DA : %.2f\n", DA);
    printf("Deductions : %.2f\n", Deductions);
    printf("The calculated Gross Salary is : %.2f\n", Gross_Salary);
    printf("The calculated Net Salary is : %.2f\n", Net_Salary);

    //**********************
    
    return 0;
}
