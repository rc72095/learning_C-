#include <iostream>

void show_menu(){ // function for showing user an options menu.
	std::cout << "1. Search" << std::endl;
	std::cout << "2. Review record" << std::endl;
	std::cout << "3. Quit" << std::endl;
}

int get_input(){ // prompting the user for input.
	std::cout << "Enter a menu item number here: " << std::flush;

	int input;
	std::cin >> input;

	return input; // returning user input in form of an int.
}

void process_input(int input){    // processing user input
	switch(input){
	case 1:
		std::cout << "Searching" << std::endl;
		break;

	case 2:
		std::cout << "Reviewing record" << std::endl;
		break;

	case 3:
		std::cout << "Quitting" << std::endl;
		break;

	default:
		std::cout << "Please enter a valid menu number between 1-3." << std::endl;
	}
}

int main(){

show_menu(); // show user the options menu.

int input = get_input(); // prompt user for input and declare
						// new variable for input received from function above int main.

process_input(input); // Perform task according to input or prompt user for valid input.



	return 0;
}
