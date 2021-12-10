#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
using namespace std;
int matrixRows()
{
    int rows;
    do
    {
        cout << "Enter rows (1-4) : ";
        cin >> rows;
    } while (rows <= 0 || rows > 4);
    return rows;
}
int matrixCols()
{
    int cols;
    do
    {
        cout << "Enter cols (1-4) : ";
        cin >> cols;
    } while (cols <= 0 || cols > 4);
    return cols;
}

int main()
{
    char choice, end;
    bool repeat = true;
    while (repeat)
    {
        system("cls");
        cout << "\t\t    Welcome to your Scientific Calculator!\n\n";
        cout << " -----------------------------------------------------------------------------\n";
        cout << " | "<<"Enter your choice (1-6):-                                                 |\n";
        cout << " | "<<"                                                                          |\n";
        cout << " | "<<"  1.  "<<" | "<<"Simple Arithmetic Operations"<<"                                     |\n";
        cout << " | "<<"  2.  "<<" | "<<"Trigonometric, Inverse trig, Exponential or Factorial Operations "<<"|\n";
        cout << " | "<<"  3.  "<<" | "<<"Matrix Operations"<<"                                                |\n";
        cout << " | "<<"  4.  "<<" | "<<"Complex Number Calculations"<<"                                      |\n";
        cout << " | "<<"  5.  "<<" | "<<"Simultaneous Equation Solver"<<"                                     |\n";
        cout << " | "<<"  6.  "<<" | "<<"Permutations and Combinations"<<"                                    |\n";
        cout << " -----------------------------------------------------------------------------\n";
        cout << "\nEnter choice (1-6): ";
        cin >> choice;
        while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6')
        {
            cout << "Please enter a valid option!\n";
            cout << "Enter choice (1-6): ";
            cin >> choice;
        }
        cout << endl;
        if (choice == '1')
        {
            // Code for Simple Arithmetic
            class Arithmetic
            {
                double a, b;

            public:
                Arithmetic(double num1, double num2)
                {
                    a = num1;
                    b = num2;
                }
                void add()
                {
                    cout << a << " + " << b << " = " << (a + b) << endl;
                }
                void subtract()
                {
                    cout << a << " - " << b << " = " << (a - b) << endl;
                }
                void multiply()
                {
                    cout << a << " * " << b << " = " << (a * b) << endl;
                }
                void divide()
                {
                    cout << a << " / " << b << " = " << (a / b) << endl;
                }
            };
            double a, b;
            char choice1;
            cout << "Example input: 2 + 5 \t\t (+, -, *, / allowed)";
            cout << "\n\nEnter expression: ";
            cin >> a >> choice1 >> b;
            Arithmetic calc1(a, b);
            cout << endl;
            switch (choice1)
            {
            case '+':
                calc1.add();
                break;
            case '-':
                calc1.subtract();
                break;
            case '*':
                calc1.multiply();
                break;
            case '/':
                calc1.divide();
                break;
            default:
                cout << "Enter correct operation!" << endl;
            }
        }

        else if (choice == '2')
        {
            // Code for Trigo, Inv Trig, Exponential, Factorial
            class TrigExpFact
            {
            public:
                void trig()
                {
                    char choice2;
                    cout << "angle in degrees or radians ? (d/r) : ";
                    cin >> choice2;
                    if (choice2 == 'd')
                    {
                        double y;
                        cout << "ONLY FOR VALUE OF ANGLES IN degrees" << endl;
                        cout << "Enter the value of angle(in degrees) : ";
                        cin >> y; //1degree = pi/180 rad
                        cout << "sin(" << y << ") = " << sin(y * 3.14159 / 180) << endl;
                        cout << "cos(" << y << ") = " << cos(y * 3.14159 / 180) << endl;
                        cout << "tan(" << y << ") = " << tan(y * 3.14159 / 180) << endl;
                        cout << "sin-1(" << y << ") = " << asin(y) *180/3.14159 << endl;
                        cout << "cos-1(" << y << ") = " << acos(y) *180/3.14159 << endl;
                        cout << "tan-1(" << y << ") = " << atan(y) *180/3.14159 << endl;
                    }
                    else if (choice2 == 'r')
                    {
                        double x;
                        cout << "ONLY FOR VALUE OF ANGLES IN RADIANS" << endl;
                        cout << "Enter the value of angle(in radians) : ";
                        cin >> x; // by default rad
                        cout << "sin(" << x << ") = " << sin(x) << endl;
                        cout << "cos(" << x << ") = " << cos(x) << endl;
                        cout << "tan(" << x << ") = " << tan(x) << endl;
                        cout << "sin-1(" << x << ") = " << asin(x) << endl;
                        cout << "cos-1(" << x << ") = " << acos(x) << endl;
                        cout << "tan-1(" << x << ") = " << atan(x) << endl;
                    }
                    else
                    {
                        cout << "Check once again" << endl;
                    }
                }
                void exp()
                {
                    double a, b, result;
                    cout << "Enter base number : ";
                    cin >> a;
                    cout << "Enter power number : ";
                    cin >> b;
                    result = pow(a, b);
                    cout << fixed << setprecision(10) << result;
                }
                void fact()
                {
                    int n, i;
                    long long fact = 1;
                    cout << "Enter a no. : ";
                    cin >> n;
                    if (n < 0)
                        cout << "Please enter a positive number!";
                    else
                    {
                        for (i = n; i > 0; i--)
                        {
                            fact = fact * i;
                        }
                        cout << "Factorial of " << n << " is " << fact;
                    }
                }
            };
            TrigExpFact calc2;
            char choose;
            cout << "Choose type of calculator : " << endl
                 << "1) Trigonometric" << endl
                 << "2) Exponential" << endl
                 << "3) Factorial" << endl;
            cin >> choose;
            switch (choose)
            {
            case '1':
                calc2.trig();
                break;
            case '2':
                calc2.exp();
                break;
            case '3':
                calc2.fact();
                break;
            default:
                cout << "Enter correct option!!!";
            }
        }

        else if (choice == '3')
        {
            // Code for Matrix Calculations
            cout << "\nMatrix A" << endl;
            int aRows = matrixRows();
            int aCols = matrixCols();
            cout << endl;
            int a[aRows][aCols];
            for (int i = 1; i <= aRows; i++)
            {
                for (int j = 1; j <= aCols; j++)
                {
                    cout << "A[" << i << "][" << j << "] =  ";
                    cin >> a[i - 1][j - 1];
                }
            }
            cout << "\nMatrix B" << endl;
            int bRows = matrixRows();
            int bCols = matrixCols();
            cout << endl;
            int b[bRows][bCols];
            for (int i = 1; i <= bRows; i++)
            {
                for (int j = 1; j <= bCols; j++)
                {
                    cout << "B[" << i << "][" << j << "] =  ";
                    cin >> b[i - 1][j - 1];
                }
            }
            char operation;
        wrongInput:
            cout << "\n+ for addition\n- for subtraction\nx for scalar multiplication\n* for matrix multiplication\n\nEnter : ";
            cin >> operation;
            switch (operation)
            {
            case '+':
                if (aRows == bRows && aCols == bCols)
                {
                    int c[bRows][bCols];
                    for (int i = 0; i < bRows; i++)
                    {
                        for (int j = 0; j < bCols; j++)
                        {
                            c[i][j] = a[i][j] + b[i][j];
                        }
                    }
                    cout << "\nResultant Matrix C (C = A + B) is:\n";
                    for (int i = 0; i < bRows; i++)
                    {
                        for (int j = 0; j < bCols; j++)
                        {
                            if (i == 0 && j == 0)
                                cout << "\n";
                            cout << "  " << c[i][j] << '\t';
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
                else
                    cout << "ERROR! Dimensions do not match.";
                break;
            case '-':
                if (aRows == bRows && aCols == bCols)
                {
                    char order;
                orderInput:
                    cout << "\nEnter 1 for Matrix A - Matrix B\n";
                    cout << "Enter 2 for Matrix B - Matrix A\n\nEnter: ";
                    cin >> order;
                    if (order != '1' && order != '2')
                    {
                        cout << "\nPlease enter valid option!";
                        goto orderInput;
                    }
                    int c[bRows][bCols];
                    for (int i = 0; i < bRows; i++)
                    {
                        for (int j = 0; j < bCols; j++)
                        {
                            if (order == '1')
                                c[i][j] = a[i][j] - b[i][j];
                            else
                                c[i][j] = b[i][j] - a[i][j];
                        }
                    }
                    if (order == '1')
                        cout << "\nResultant Matrix C (C = A - B) is:\n";
                    else
                        cout << "\nResultant Matrix C (C = B - A) is:\n";
                    for (int i = 0; i < bRows; i++)
                    {
                        for (int j = 0; j < bCols; j++)
                        {
                            if (i == 0 && j == 0)
                                cout << "\n";
                            cout << "  " << c[i][j] << '\t';
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
                else
                    cout << "ERROR! Dimensions do not match.";
                break;
            case 'x':
            case 'X':
                int constant;
                cout << "Enter scalar: ";
                cin >> constant;
                char matrixSelection;
                cout << "\nEnter 1 for multiplying scalar with Matrix A\n";
                cout << "Enter 2 for multiplying scalar with Matrix B\n\nEnter: ";
                cin >> matrixSelection;
                while (matrixSelection != '1' && matrixSelection != '2')
                {
                    cout << "\nPlease enter a valid input!";
                    cout << "\nEnter 1 for multiplying scalar with Matrix A\n";
                    cout << "Enter 2 for multiplying scalar with Matrix B\n\nEnter: ";
                    cin >> matrixSelection;
                }
                if (matrixSelection == '1')
                {
                    int c[aRows][aCols];
                    for (int i = 0; i < aRows; i++)
                    {
                        for (int j = 0; j < aCols; j++)
                        {
                            c[i][j] = a[i][j] * constant;
                        }
                    }
                    cout << "\nResultant Matrix C (C = A * " << constant << ") is:\n";
                    for (int i = 0; i < aRows; i++)
                    {
                        for (int j = 0; j < aCols; j++)
                        {
                            if (i == 0 && j == 0)
                                cout << "\n";
                            cout << "  " << c[i][j] << '\t';
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
                else
                {
                    int c[bRows][bCols];
                    for (int i = 0; i < bRows; i++)
                    {
                        for (int j = 0; j < bCols; j++)
                        {
                            c[i][j] = b[i][j] * constant;
                        }
                    }
                    cout << "\nResultant Matrix C (C = B * " << constant << ") is:\n";
                    for (int i = 0; i < bRows; i++)
                    {
                        for (int j = 0; j < bCols; j++)
                        {
                            if (i == 0 && j == 0)
                                cout << "\n";
                            cout << "  " << c[i][j] << '\t';
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
                break;
            case '*':
                char mulOrder;
            multiplicationOrder:
                cout << "\nEnter 1 for Matrix A * Matrix B\n";
                cout << "Enter 2 for Matrix B * Matrix A\n\nEnter: ";
                cin >> mulOrder;
                if (mulOrder != '1' && mulOrder != '2')
                {
                    cout << "\nPlease enter valid option!";
                    goto multiplicationOrder;
                }
                if (mulOrder == '1')
                {
                    if (aCols == bRows)
                    {
                        int c[aRows][bCols];
                        for (int i = 0; i < aRows; i++)
                        {
                            for (int j = 0; j < bCols; j++)
                            {
                                c[i][j] = 0;
                                for (int k = 0; k < bRows; k++)
                                {
                                    c[i][j] += a[i][k] * b[k][j];
                                }
                            }
                        }
                        cout << "\nResultant Matrix C (C = A * B) is:\n";
                        for (int i = 0; i < aRows; i++)
                        {
                            for (int j = 0; j < bCols; j++)
                            {
                                if (i == 0 && j == 0)
                                    cout << "\n";
                                cout << "  " << c[i][j] << '\t';
                            }
                            cout << endl;
                        }
                        cout << endl;
                    }
                    else
                        cout << "Matrices don't satisfy the criteria for matrix multiplication";
                }
                else
                {
                    if (bCols == aRows)
                    {
                        int c[bRows][aCols];
                        for (int i = 0; i < bRows; i++)
                        {
                            for (int j = 0; j < aCols; j++)
                            {
                                c[i][j] = 0;
                                for (int k = 0; k < aRows; k++)
                                {
                                    c[i][j] += b[i][k] * a[k][j];
                                }
                            }
                        }
                        cout << "\nResultant Matrix C (C = B * A) is:\n";
                        for (int i = 0; i < bRows; i++)
                        {
                            for (int j = 0; j < aCols; j++)
                            {
                                if (i == 0 && j == 0)
                                    cout << "\n";
                                cout << "  " << c[i][j] << '\t';
                            }
                            cout << endl;
                        }
                        cout << endl;
                    }
                    else
                        cout << "Matrices don't satisfy the criteria for matrix multiplication";
                }
                break;
            default:
                cout << "\nPlease enter a valid input!\n";
                goto wrongInput;
                break;
            }
        }

        else if (choice == '4')
        {
            // Code for Complex Number Calculations
            class Complex
            {
            public:
                double real;
                double imag;
                // Function to set the values of
                //real and imaginary part of each complex number
                void setvalue()
                {
                    cin >> real;
                    cin >> imag;
                }
                // Function to display the sum of two complex numbers
                void display()
                {
                    if (imag >= 0)
                    {
                        cout << real << " + " << imag << "i" << endl;
                    }
                    else
                    {
                        cout << real << " - " << abs(imag) << "i" << endl;
                    }
                }
                // Functions of calculators
                void add(Complex c1, Complex c2)
                {
                    real = c1.real + c2.real;
                    imag = c1.imag + c2.imag;
                }
                void sub(Complex c1, Complex c2)
                {
                    real = c1.real - c2.real;
                    imag = c1.imag - c2.imag;
                }
                void multiply(Complex c1, Complex c2)
                {
                    real = c1.real * c2.real - c1.imag * c2.imag;
                    imag = c1.real * c2.imag + c1.imag * c2.real;
                }
                void divide(Complex c1, Complex c2)
                {
                    real = ((c1.real * c2.real) + (c1.imag * c2.imag)) / ((c2.real * c2.real) + (c2.imag * c2.imag));
                    imag = ((c2.real * c1.imag) - (c1.real * c2.imag)) / ((c2.real * c2.real) + (c2.imag * c2.imag));
                }
            };
            Complex c1, c2, c3;
            int choice4;
            cout << "Enter real and imaginary part of first complex number" << endl;
            c1.setvalue();
            cout << "First number:" << endl;
            c1.display();
            cout << "Enter real and imaginary part of second complex number" << endl;
            c2.setvalue();
            cout << "Second number:" << endl;
            c2.display();
            cout << "\nChoose your operation:" << endl;
            cout << "1: Addition" << endl;
            cout << "2: Subtraction" << endl;
            cout << "3: Multiplication" << endl;
            cout << "4: Division" << endl;
            cin >> choice4;
            cout << "-------------------------------------------------" << endl;

            if (choice4 == 1)
            {
                c3.add(c1, c2);
                cout << "SUM:" << endl;
                c3.display();
                cout << "-------------------------------------------------" << endl;
            }
            if (choice4 == 2)
            {
                cout << "SUBTRACTION:" << endl;
                c3.sub(c1, c2);
                c3.display();
                cout << "-------------------------------------------------" << endl;
            }
            if (choice4 == 3)
            {
                cout << "MULTIPLICATION:" << endl;
                c3.multiply(c1, c2);
                c3.display();
                cout << "-------------------------------------------------" << endl;
            }
            if (choice4 == 4)
            {
                cout << "DIVISION:" << endl;
                c3.divide(c1, c2);
                c3.display();
                cout << "-------------------------------------------------" << endl;
            }
        }

        else if (choice == '5')
        {
            // Code for Simultaneous Equations
            class Simultaneous
            {
            public:
                void twoVariables()
                {
                    float p1, q1, r1, p2, q2, r2;
                    char xvar, yvar, operation1, operation2, equal;
                    cout << "Enter the 1st equation: ";
                    cin >> p1 >> xvar >> operation1 >> q1 >> yvar >> equal >> r1;
                    cout << "Enter the 2nd equation: ";
                    cin >> p2 >> xvar >> operation2 >> q2 >> yvar >> equal >> r2;

                    if (operation1 == '-')
                    {
                        q1 = -1 * q1;
                    }

                    if (operation2 == '-')
                    {
                        q2 = -1 * q2;
                    }

                    if ((p1 * q2 - p2 * q1) == 0)
                    {
                        cout << "No solution or infinite solutions";
                    }

                    cout << "\nx = " << (r1 * q2 - q1 * r2) / (p1 * q2 - p2 * q1);
                    cout << "\ny = " << (p1 * r2 - p2 * r1) / (p1 * q2 - p2 * q1);
                }
                void threeVariables()
                {
                    float a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3, D, Dx, Dy, Dz;
                    char xv, yv, zv, op1, op2, op3, op4, op5, op6, eq;
                    cout << "Enter 1st equation: ";
                    cin >> a1 >> xv >> op1 >> b1 >> yv >> op2 >> c1 >> zv >> eq >> d1;
                    cout << "Enter 2nd equation: ";
                    cin >> a2 >> xv >> op3 >> b2 >> yv >> op4 >> c2 >> zv >> eq >> d2;
                    cout << "Enter 3rd equation: ";
                    cin >> a3 >> xv >> op5 >> b3 >> yv >> op6 >> c3 >> zv >> eq >> d3;

                    if (op1 == '-')
                        b1 = -1 * b1;

                    if (op2 == '-')
                        c1 = -1 * c1;

                    if (op3 == '-')
                        b2 = -1 * b2;

                    if (op4 == '-')
                        c2 = -1 * c2;

                    if (op5 == '-')
                        b3 = -1 * b3;

                    if (op6 == '-')
                        c3 = -1 * c3;

                    D = a1 * (b2 * c3 - b3 * c2) - b1 * (a2 * c3 - a3 * c2) + c1 * (a2 * b3 - a3 * b2);
                    if (D == 0)
                        cout << "No solution or infinte solutions" << endl;

                    Dx = d1 * (b2 * c3 - b3 * c2) - b1 * (d2 * c3 - d3 * c2) + c1 * (d2 * b3 - d3 * b2);
                    Dy = a1 * (d2 * c3 - d3 * c2) - d1 * (a2 * c3 - a3 * c2) + c1 * (a2 * d3 - a3 * d2);
                    Dz = a1 * (b2 * d3 - b3 * d2) - b1 * (a2 * d3 - a3 * d2) + d1 * (a2 * b3 - a3 * b2);

                    cout << "\nx = " << Dx / D;
                    cout << "\ny = " << Dy / D;
                    cout << "\nz = " << Dz / D;
                }
            };
            int n;
            cout << "\nEnter 2 to solve simultaneous equation in two variables\nEnter 3 to solve simultaneous equation in three variables" << endl;
            cin >> n;
            Simultaneous calc5;
            switch (n)
            {
            case 2:
                calc5.twoVariables();
                break;

            case 3:
                calc5.threeVariables();
                break;

            default:
                cout << "Invalid input, please enter either 2 or 3";
                break;
            }
        }

        else if (choice == '6')
        {
            // Code for P&C
            class PandC
            {
            public:
                int n, r, nCr, nPr;
                long long fact(int n)
                {
                    if (n == 0 || n == 1)
                        return 1;
                    else
                        return n * fact(n - 1);
                }
                void calc()
                {
                    cout << "Enter n : ";
                    cin >> n;
                    cout << "Enter r : ";
                    cin >> r;
                    nPr = fact(n) / fact(n - r);
                    cout << "Permutations ( " << n << "P" << r << " ) = " << nPr;
                    nCr = fact(n) / (fact(r) * fact(n - r));
                    cout << "\nCombinations ( " << n << "C" << r << " ) = " << nCr;
                }
            };
            PandC calc6;
            calc6.calc();
        }
        cout << "\nDo you want to do another calculation? Press y/Y to continue: ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y'){
            repeat = false;
            cout << "\nThank you :D\n\n";
        }
    }
    return 0;
}