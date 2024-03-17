
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
if (discriminante > 0) {
        
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << x1 << " " << x2 << ;
    } else if (discriminante == 0) {
        // Una raíz real
        double x = -b / (2 * a);
        cout << x << ;
    } else {
        
        cout << "No hay raíces reales" << ;
    }
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
    int A, B;
    cin >> A >> B;

    if (B == 0) {
        cout << "Imposible" << endl;
    } else {
        cout << A / B << endl;
    }

}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
cout << "Ingrese el costo original del producto (N): ";
    cin >> N;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;
    cout << "Ingrese el descuento X (%): ";
    cin >> X;
    cout << "Ingrese el descuento Y (%): ";
    cin >> Y;
    
    if (N > A) { 
        N -= N * (X / 100.0);
    }
    if (N > B) {
        N -= N * (Y / 100.0);
    }
    cout << "El costo de compra del producto con descuento es: " << N << endl;
    
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
char caracter;
    
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    
    if (caracter >= 'A' && caracter <= 'Z') {
        cout << "El caracter ingresado es una letra mayuscula." << endl;
    } else if (caracter >= 'a' && caracter <= 'z') {
        cout << "El caracter ingresado es una letra minuscula." << endl;
    } else {
        cout << "El caracter ingresado no es una letra." << endl;
    }
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