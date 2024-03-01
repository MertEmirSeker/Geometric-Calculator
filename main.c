#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int select_shape();
int select_calc();
int cal_triangle(int i);
int calc_quadrilateral(int i);
int calc_circle(int i);
int calc_pyramid(int i);
int calc_cylinder(int i);

enum Shapes
{

    Triange = 1,
    Quadrilateral,
    Circle,
    Pyramid,
    Cylinder
};

enum Calculators
{

    Area = 1,
    Perimeter,
    Volume
};
void clean(void) // Checks if letters are entered
{
    int a;
    do
    {
        a = getchar();
    } while (a != '\n' && a != EOF);
}

int cal_triangle(int i)
{
    double a, b, c, s, result = 0;
    switch (i)
    {
    case 1:
        printf("Please enter three sides of Triangle:\n");
        if (scanf("%lf", &a))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }

        if (scanf("%lf", &b))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }

        if (scanf("%lf", &c))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }
        s = (a + b + c) / 2;
        result = sqrt(s * (s - a) * (s - b) * (s - c));                                              // calculating area of triangle
        if (((a + b) < c) || ((a - b) > c) || (a + c) < b || (a - c) > b || a < 0 || b < 0 || c < 0) // checking if it's a triangle
        {
            printf("ERROR ! Please enter a valid triangle.\n");
        }
        else
        {
            printf("Area of TRIANGLE : %.2lf\n", result);
        }
        break;

    case 2:
        printf("Please enter three sides of Triangle:\n");
        if (scanf("%lf", &a))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }

        if (scanf("%lf", &b))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }

        if (scanf("%lf", &c))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }
        result = a + b + c;                                                                          // calculating perimeter of triangle
        if (((a + b) < c) || ((a - b) > c) || (a + c) < b || (a - c) > b || a < 0 || b < 0 || c < 0) // checking if it's a triangle
        {
            printf("ERROR ! Please enter a valid triangle.\n");
        }
        else
        {
            printf("Perimeter of TRIANGLE : %.2lf\n", result);
        }

        break;

    case 3:
        printf("ERROR ! You cannot calculate the volume of a triangle. Please try again.\n");
        break;

    default:
        break;
    }
}
int calc_quadrilateral(int i)
{
    double a, b, c, d, s, result = 0;
    switch (i)
    {
    case 1:
        printf("Please enter four sides of Quadrilateral:\n");
        if (scanf("%lf", &a))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }

        if (scanf("%lf", &b))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }

        if (scanf("%lf", &c))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (scanf("%lf", &d))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (a <= 0 || b <= 0 || c <= 0 || d <= 0) // checking if it's a quadrilateral
        {
            printf("ERROR! Please enter a valid entry.");
            break;
        }
        s = (a + b + c + d) / 2;
        result = sqrt((s - a) * (s - b) * (s - c) * (s - d)); // calculating area of quadrilateral
        printf("Area of QUADRILATERAL : %.2lf\n", result);
        break;
    case 2:
        printf("Please enter four sides of Quadrilateral:\n");
        if (scanf("%lf", &a))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }

        if (scanf("%lf", &b))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }

        if (scanf("%lf", &c))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (scanf("%lf", &d))
        {
        }
        else
        {
            printf("ERROR ! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (a <= 0 || b <= 0 || c <= 0 || d <= 0) // checking if it's a quadrilateral
        {
            printf("ERROR! Please enter a valid entry.");
            break;
        }
        result = a + b + c + d; // calculating perimeter of quadrilateral
        printf("Perimeter of QUADRILATERAL : %.2lf\n", result);

        break;
    case 3:
        printf("ERROR ! You cannot calculate the volume of a quadrilateral. Please try again.\n");
        break;

    default:
        break;
    }
}
int calc_circle(int i)
{
    double r, result = 0;
    switch (i)
    {
    case 1:
        printf("Please enter the radius of Circle:\n");
        if (scanf("%lf", &r))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (r <= 0) // checking if it's a circle
        {
            printf("ERROR! Please enter a valid entry.\n");
            break;
        }
        result = PI * r * r; // calculating area of circle
        printf("Area of CIRCLE : %.2lf\n", result);
        break;
    case 2:
        printf("Please enter the radius of Circle:\n");
        if (scanf("%lf", &r))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (r <= 0) // checking if it's a circle
        {
            printf("ERROR! Please enter a valid entry.\n");
            break;
        }
        result = 2 * PI * r; // calculating perimeter of circle
        printf("Perimeter of CIRCLE : %.2lf\n", result);
        break;
    case 3:
        printf("ERROR ! You cannot calculate the volume of a circle. Please try again.\n");
        break;

    default:
        break;
    }
}

int calc_pyramid(int i)
{
    double l, a, lt, b, s, result = 0; // l -> base height a -> base side lt -> lateral surface area b -> base surface area s-> surface area
    switch (i)
    {
    case 1:
        printf("Please enter the base side and height of a Pyramid :\n");
        if (scanf("%lf", &a))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (scanf("%lf", &l))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (l <= 0 || a <= 0) // checking if it's a pyramid
        {
            printf("ERROR! Please enter a valid entry.\n");
            break;
        }
        b = a * a;      // calculating base surface area of pyramid
        lt = 2 * l * a; // calculating leteral surface area of a pyramid
        s = b + lt;     // calculating surface area of a pyramid

        printf("Base Surface Area of a PYRAMID: %.2lf\n", b);
        printf("Lateral Surface Area of a PYRAMID: %.2lf\n", lt);
        printf("Surface Area of a PYRAMID: %.2lf\n", s);

        break;
    case 2:
        printf("Please enter the base side of a Pyramid:\n");

        if (scanf("%lf", &a))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (a <= 0)
        {
            printf("ERROR! Please enter a valid entry.\n");
            break;
        }
        result = 4 * a;
        printf("Perimeter of the PYRAMID is: %.2lf\n", result);

        break;
    case 3:
        printf("Please enter the base side and height of a Pyramid :\n");
        if (scanf("%lf", &a))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (scanf("%lf", &l))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (a <= 0 || l <= 0) // checking if it's a pyramid
        {
            printf("ERROR! Please enter a valid entry.\n");
            break;
        }
        result = (a * a * l) / 3; // calculating volume of a pyramid
        printf("Volume of a PYRAMID: %.2lf\n", result);

        break;

    default:
        break;
    }
}
int calc_cylinder(int i)
{
    double r, h, b, l, s, result = 0; // r -> radius h -> height l -> lateral surface area b -> base surface area s-> surface area
    switch (i)
    {
    case 1:
        printf("Please enter the radius and height of a Cylinder :\n");
        if (scanf("%lf", &r))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (scanf("%lf", &h))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (r <= 0 || h <= 0) // checking if it's a cylinder
        {
            printf("ERROR! Please enter a valid entry.\n");
            break;
        }
        b = PI * r * r;           // calculating base surface area of cylinder
        l = 2 * PI * r * h;       // calculating leteral surface area of cylinder
        s = 2 * PI * r * (r + h); // calculating surface area of cylinder

        printf("Base Surface Area of a CYLINDER: %.2lf\n", b);
        printf("Lateral Surface Area of a CYLINDER: %.2lf\n", l);
        printf("Surface Area of a CYLINDER: %.2lf\n", s);
        break;
    case 2:
        printf("Please enter the radius and height of a Cylinder :\n");
        if (scanf("%lf", &r))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (scanf("%lf", &h))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (r <= 0 || h <= 0) // checking if it's a cylinder
        {
            printf("ERROR! Please enter a valid entry.\n");
            break;
        }
        result = 2 * PI * r; // calculating base surface perimeter of a cylinder
        printf("Base surface perimeter of a CYLINDER : %.2lf\n", result);
        break;
    case 3:
        printf("Please enter the radius and height of a Cylinder :\n");
        if (scanf("%lf", &r))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (scanf("%lf", &h))
        {
        }
        else
        {
            printf("ERROR! Please enter a valid entry.\n");
            clean();
            break;
        }
        if (r <= 0 || h <= 0) // checking if it's a cylinder
        {
            printf("ERROR! Please enter a valid entry.\n");
            break;
        }
        result = PI * r * r * h; // calculating volume of a cylinder
        printf("Volume of a CYLINDER: %.2lf", result);
        break;
    default:
        break;
    }
}

int select_shape() // selecting shape this function returns shape number
{
    int i;
    scanf("%d", &i);
    return i;
}

int select_calc() // selecting calculator this function return calculator number
{
    int j;
    scanf("%d", &j);
    return j;
}

int calculate(int (*i)(int), int (*j)(int))
{
    enum Shapes shape;
    enum Calculators calculator;
    do
    {
        printf("Welcome to the geometric calculator!\n\n");
        printf("Select a shape to calculate:\n");
        printf("--------------------------------\n");
        printf("1. Triangle\n2. Quadrilateral\n3. Circle\n4. Pyramid\n5. Cylinder\n0. Exit\n");
        printf("--------------------------------\n");
        printf("Input :");
        shape = i(0); // for get shape selection
        switch (shape)
        {
        case Triange:
            printf("Select calculator:\n");
            printf("--------------------------------\n");
            printf("1. Area\n");
            printf("2. Perimeter\n");
            printf("3. Volume\n");
            printf("0. Exit\n");
            printf("--------------------------------\n");
            printf("Input : ");
            calculator = j(0); // for get calculator selection
            cal_triangle(calculator);

            break;
        case Quadrilateral:
            printf("Select calculator:\n");
            printf("--------------------------------\n");
            printf("1. Area\n");
            printf("2. Perimeter\n");
            printf("3. Volume\n");
            printf("0. Exit\n");
            printf("--------------------------------\n");
            printf("Input : ");
            calculator = j(0); // for get calculator selection
            calc_quadrilateral(calculator);
            break;
        case Circle:
            printf("Select calculator:\n");
            printf("--------------------------------\n");
            printf("1. Area\n");
            printf("2. Perimeter\n");
            printf("3. Volume\n");
            printf("0. Exit\n");
            printf("--------------------------------\n");
            printf("Input : ");
            calculator = j(0); // for get calculator selection
            calc_circle(calculator);
            break;
        case Pyramid:
            printf("Select calculator:\n");
            printf("--------------------------------\n");
            printf("1. Area\n");
            printf("2. Perimeter\n");
            printf("3. Volume\n");
            printf("0. Exit\n");
            printf("--------------------------------\n");
            printf("Input : ");
            calculator = j(0); // for get calculator selection
            calc_pyramid(calculator);
            break;
        case Cylinder:
            printf("Select calculator:\n");
            printf("--------------------------------\n");
            printf("1. Area\n");
            printf("2. Perimeter\n");
            printf("3. Volume\n");
            printf("0. Exit\n");
            printf("--------------------------------\n");
            printf("Input : ");
            calculator = j(0); // for get calculator selection
            calc_cylinder(calculator);
            break;
        default:
            if (shape != 0)
            {
                printf("ERROR! Please enter a valid entry.\n\n");
            }
            break;
        }
    } while (shape != 0);
}

int main()
{

    calculate(select_shape, select_calc);

    return 0;
}
