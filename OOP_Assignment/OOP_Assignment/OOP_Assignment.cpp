// OOP_Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

class Dog {
public:
    string breed;
    string color;
    float height;
    float weight;

    Dog(string br, string col, float heightInFeet, float weightInPounds) {
        breed = br;
        color = col;
        height = heightInFeet;
        weight = weightInPounds;
    }

    void Shake() {
        cout << breed << " is shaking.\n";
    }
    void Sit() {
        cout << breed << " is sitting.\n";
    }
    void LayDown() {
        cout << breed << " is laying down.\n";
    }
};


int main()
{
    Dog hound("Hound", "Brown", 2, 60);

    cout << "Breed is: " << hound.breed << '\n';
    cout << "Color is: " << hound.color << '\n';
    cout << "Height is: " << hound.height << " feet.\n";
    cout << "Weight is: " << hound.weight << " pounds.\n";

    hound.Shake();
    hound.Sit();
    hound.LayDown();

    cout << "Press any key to continue...";
    cin.get();
}
