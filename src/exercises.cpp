
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void exercise_1(string s1, string s2, string s3) {
// TODO: YOUR CODE HERE
s1;
s2;
s3;   
if (s1 < s2 && s1 < s3) {
         cout << s1;
} else if (s2 < s1 && s2 < s3) {
         cout << s2;
} else {
        cout << s3;
}

}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
if (a == 0) {
        // Si a es igual a cero, la ecuación no es cuadrática
        // se convierte en una ecuación lineal
        if (b == 0) {
            // Si b también es igual a cero, la ecuación es degenerada
            cout << "La ecuación no es válida." << endl;
        } else {
            // Si b no es cero, la ecuación es lineal y tiene una solución única
            double x = -c / b;
            cout << "La solución es: x = " << x << endl;
        }
    } else {
        // Si a no es cero, la ecuación es cuadrática y tiene dos soluciones
        double discriminante = b * b - 4 * a * c;

        if (discriminante < 0) {
            // Si el discriminante es negativo, las soluciones son complejas
            double parteReal = -b / (2 * a);
            double parteImaginaria = sqrt(-discriminante) / (2 * a);
            cout << "Las soluciones son complejas:" << endl;
            cout << "x1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
            cout << "x2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
        } else {
            // Si el discriminante es no negativo, las soluciones son reales
            double x1 = (-b + sqrt(discriminante)) / (2 * a);
            double x2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << "Las soluciones son reales:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
}
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE

}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE

}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}