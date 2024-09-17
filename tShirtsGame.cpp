// Wilson Quilli and Mostafa Amer
// 9/5/2024
// Personalization T-Shirt Game

#include <iostream>
using namespace std;

int main() {
    string size, color, material, fit, SleeveLength, CollarType, design, pattern;
    int choice; 

    cout << "Welcome to the T-Shirt Personalization Trivia by Wilson and Mostafa\n";
    cout << "To be able to find the best T-Shirt For You!\n";

    //Q1
cout << "What Size Do You Wish Your Shirt to Be?\n";
cout << " 1. Small\n 2. Medium\n 3. Large\n 4. X-Large\n";
cout << "Your Answer: ";
cin >> choice; 
switch (choice) {
    case 1: size = "Small"; break;
    case 2: size = "Medium"; break;
    case 3: size = "Large"; break;
    case 4: size = "X-Large"; break;
}

    //Q2 
cout << "What Color Would You Wish Your Shirt to Be?\n";
cout << " 1. Red\n 2. Black\n 3. Blue\n 4. Pink\n";
cout << "Your Answer: ";
cin >> choice;
switch (choice) {
    case 1: color = "Red"; break; 
    case 2: color = "Black"; break;
    case 3: color = "Blue"; break;
    case 4: color = "Pink"; break;
}

    //Q3
cout << "What Material Would You Wish Your Shirt to Be Made Out Of?\n";
cout << " 1. Cotton\n 2. Polyester\n 3. Silk\n 4. Linen\n";
cout << "Your Answer: ";
cin >> choice;
switch (choice) {
    case 1: material = "Cotton"; break; 
    case 2: material = "Polyester"; break; 
    case 3: material = "Silk"; break;
    case 4: material = "Linen"; break;
}

    //Q4
cout << "What Type of Fit What You Want Your T-Shirt to be?\n";
cout << " 1. Loose Fit\n 2. Athletic Fit\n 3. Slim Fit\n 4. Skinny Fit\n";
cout << "Your Answer: ";
cin >> choice;
switch (choice) {
    case 1: fit = "Loose Fit"; break; 
    case 2: fit = "Athletic Fit"; break; 
    case 3: fit = "Slim Fit"; break; 
    case 4: fit = "Skinny Fit"; break;
}

    //Q5
cout << "Do you want long-sleeved shirt or short-sleeved shirt?\n";
cout << " 1. Long-Sleeved Shirt\n 2. Short-Sleeved Shirt\n";
cout << "Your Answer: ";
cin >> choice;
switch (choice) {
    case 1: SleeveLength = "Long Sleeved Shirt"; break;
    case 2: SleeveLength = "Short-Sleeved Shirt"; break; 
}

    //Q6
cout << "What Type of Collar Do You Want?\n";
cout << " 1. Round-Neck Collar\n 2. V-Shaped Collar";
cout << "Your Answer: ";
cin >> choice;
switch (choice) {
    case 1: CollarType = "Round-Neck Collar"; break;
    case 2: CollarType = "V-Shaped Collar"; break; 
}

    //Q7
cout << "What Design Would You Like on Your T-Shirt?\n";
cout << " 1. Heart\n 2. C++\n 3. Messi\n 4. Dog\n";
cout << "Your Answer: ";
cin >> choice;
switch (choice) {
    case 1: design = "Heart"; break; 
    case 2: design = "C++"; break; 
    case 3: design = "Messi"; break;
    case 4: design = "Dog"; break; 
}

    //Q8
cout << "Do You Want a Single or Multi-Color Pattern?\n";
cout << " 1. Single Pattern\n 2. Multi-Color Pattern\n";
cout << "Your Answer: ";
cin >> choice;
switch (choice) {
    case 1: pattern = "Single-Pattern"; break;
    case 2: pattern = "Multi-Color Pattern"; break; 
}

cout << "Here is Your Perfect T-Shirt:\n";
cout << "Chosen Size: " << size << endl;
cout << "Chosen Color: " << color << endl;
cout << "Chosen Material: " << material << endl;
cout << "Chosen Fit: " << fit << endl; 
cout << "Chosen Sleeve Length: " << SleeveLength << endl; 
cout << "Chosen Collar Type: " << CollarType << endl; 
cout << "Chosen Design: " << design << endl;
cout << "Chosen Patern: " << pattern << endl; 

cout << "You want a " << color << " " << SleeveLength << ", Size " << size << ", with a " << design 
<< " print, made out of " << material << ", with a " << CollarType << ", in " << fit << ", and a " << pattern << ".\n";   

cout << "Thank you for using our Questionaire!\n";

return 0; 

}