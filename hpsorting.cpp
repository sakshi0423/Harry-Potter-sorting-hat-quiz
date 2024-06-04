#include<iostream>
int main()
{
    int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
    int q1, q2, q3, q4;

    std::cout<<"The Sorting Hat Quiz!\n";

    std::cout << "Q1) When I'm dead, I want people to remember me as: \n";
    std::cout << "1) The Good \n";
    std::cout << "2) The Great \n";
    std::cout << "3) The Wise \n";
    std::cout << "4) The Bold \n";

    std::cout << "Enter your choice: ";
    std::cin >> q1;

    if(q1 == 1){
    hufflepuff += 1;
    }
    else if(q1 == 2){
        slytherin += 1;
    }
    else if(q1 == 3){
        ravenclaw += 1;
    }
    else{
        gryffindor += 1;
    }

    std::cout << "Q2) Dawn or Dusk? \n";
    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n";

    std::cout << "Enter your choice: ";
    std::cin >> q2;

    if(q2 == 1){
        gryffindor += 1;
        ravenclaw += 1;
    }
    else{
        hufflepuff += 1;
        slytherin += 1;
    }

    
    std::cout << "Q3) Which kind of instrument most pleases your ear? \n";
    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";
    
    std::cout << "Enter your choice: ";
    std::cin >> q3;

    if(q3 == 1){
        slytherin += 1;
    }
    else if(q3 == 2){
        hufflepuff += 1;
    }
    else if(q3 == 3){
        ravenclaw += 1;
    }
    else{
        gryffindor += 1;
    }

   
    std::cout << "Q4) Which road tempts you most? \n";
    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";

    std::cout << "Enter your choice: ";
    std::cin >> q4;

    if(q4 == 1){
        hufflepuff += 1;
    }
    else if (q4 == 2){
        slytherin += 1;
    }
    else if (q4 == 3){
        gryffindor += 1;
    }
    else{
        ravenclaw += 1;
    }
    

    std::string house;
    int max = 0;
    if (gryffindor > max) {
    
        max = gryffindor;
        house = "Gryffindor";
    
    }
    
    if (hufflepuff > max) {
    
        max = hufflepuff;
        house = "Hufflepuff";
    
    }
    
    if (ravenclaw > max) {
    
        max = ravenclaw;
        house = "Ravenclaw";
    
    }
    
    if (slytherin > max) {
    
        max = slytherin;
        house = "Slytherin";
    
    }
    std::cout << house << "!\n";
    }
    