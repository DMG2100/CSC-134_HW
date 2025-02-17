/*this is a ll code AI made. i told it  
"Can you write a program for me that just tells me 
misinformation if i ask it a question, 
with the code being written in c++?" */
#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>  // For time()

// Function to generate a random piece of misinformation
std::string generateMisinformation() {
    // Array of random misinformation
    std::string misinformation[] = {
        "The Earth is flat.",
        "The moon is made of cheese.",
        "Gravity is just a theory, not a fact.",
        "Dinosaurs never existed.",
        "Humans only use 10% of their brains.",
        "The Great Wall of China is visible from space.",
        "Vaccines cause autism.",
        "Sharks don't get cancer.",
        "Bats are blind.",
        "Cracking your knuckles causes arthritis."
    };

    // Generate a random index
    int index = rand() % 10;

    // Return the random piece of misinformation
    return misinformation[index];
}

int main() {
    // Seed the random number generator
    srand(time(0));

    std::string question;

    std::cout <<"Welcome to the Misinformation Generator!\n";
    std::cout << "Ask me any question, and I'll give you an incorrect answer.\n";
    std::cout << "Enter 'quit' to exit.\n";

    while (true) {
        std::cout << "\nYour question: ";
        std::getline(std::cin, question);

        if (question == "quit") {
            break;
        }

        std::string misinformation = generateMisinformation();
        std::cout << "Answer: " << misinformation << std::endl;
    }

    std::cout << "Goodbye! Remember, don't believe everything you hear!\n";

    return 0;
}
/*
it does not run. most likely because &lt; is suppose to be <<. 
i will fix it and see if it works.
it technically does work. it gives misinformation after i input something.
it does not give a answer based on my question though, which means it takes 
most things literally and took "Can you write a program for me that just tells me 
misinformation if i ask it a question, with the code being written in c++" as
"make a c++ code that gives a random misinformation answer to any input given after a prompt".
*/