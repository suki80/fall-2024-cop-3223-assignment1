// Name: Siqi Cai
// UCFID: 5641424

#include <math.h> 
#include <stdio.h>

#define PI 3.14159

double calculatePoints() // helper function
{
    // Purpose: assigns each input to a variable to then output lines of text
    // with each point. Then returns distance calculated by using the inputted points. 
    // Input: x1, y1, x2, y2 points
    // Output: Lines of text including the entered points
    
    int x1, y1, x2, y2;

    scanf("%d", &x1); 
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    printf("Point #1 entered: x1 = %d", x1); 
    printf("; y1 = %d", y1); 
    printf("\nPoint #2 entered: x2 = %d", x2); 
    printf("; y2 = %d\n", y2); 
   
    double distance = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

    return distance;
}

double calculateDistance() 
{
    // Purpose: calls calculatePoints() and prints and returns the distance
    // Input: none
    // Output: A lines of text stating the distance

    double distance = calculatePoints();

    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

double calculatePerimeter() // outputs two lines of text
{
    // Purpose: calls calculatePoints() to find and print the perimeter then returns difficulty of function
    // Input: none
    // Output: A lines of text stating the perimeter
    
    double perimeter = 2*PI*(calculatePoints()/2);
    
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return 1.0;
}

double calculateArea()
{
    // Purpose: calls calculatePoints() to find and print the area then returns difficulty of function
    // Input: none
    // Output: A lines of text stating the area

    double area = 2*PI*sqrt(calculatePoints()/2);

    printf("The area of the city encompassed by your request is %lf\n", area);

    return 1.0;
}

double calculateWidth()
{
    // Purpose: calls calculatePoints() to find and print the width then returns difficulty of function
    // Input: none
    // Output: A lines of text stating the width

    double width = 2*(calculatePoints()/2);

    printf("The width of the city encompassed by your request is %lf\n", width);

    return 1.0;
}

double calculateHeight()
{
    // Purpose: calls calculatePoints() to find and print the height then returns difficulty of function
    // Input: none
    // Output: A lines of text stating the height

    double height = calculatePoints();
    printf("The height of the city encompassed by your request is %lf\n", height);
   
    return 1.0;
}

int main(int argc, char **argv)
{
    // Purpose: calls each calculate function
    // Input: none
    // Output: prints each calulate functions' outputs
    
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}







