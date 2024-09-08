// Name: Siqi Cai
// UCFID: 5641424

#include <math.h> 
#include <stdio.h>

#define PI 3.14159

double calculate_distance() // outputs three lines of text
{
    double x1, y1, x2, y2;
    double distance; 

    printf("Point #1 entered: x1 = " ); 
    scanf("%lf", &x1);

    printf("; y1 = ");
    scanf("%lf", &y1);

    printf("Point #2 entered: x2 = " ); 
    scanf("%lf", &x2);

    printf("; y2 = ");
    scanf("%lf", &y2);
    // assigns each input to a variable
   
    distance = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
    return distance;
}

double calculate_perimeter() // outputs two lines of text
{
    double perimeter = 2*PI*(calculate_distance()/2);
    
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return 1.0;
}

double calculate_area()
{
    double area = 2*PI*sqrt(calculate_distance()/2);
    printf("The area of the city encompassed by your request is %lf\n", area);

    return 1.0;
}

double calculate_width()
{
    double width = 2*(calculate_distance()/2);
    printf("The width of the city encompassed by your request is %lf\n", width);

    return 1.0;
}

double calculate_height()
{
    double height = 2*PI*(calculate_distance()/2);
    printf("The height between the two points is %lf\n", height);
   
    return 1.0;
}

int main(int argc, char **argv)
{
    printf("The distance between the two points is %lf\n", calculate_distance());
    calculate_perimeter();
    calculate_area();
    calculate_width();
    calculate_height();

    return 0;
}
