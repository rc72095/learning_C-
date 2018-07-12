#include <iostream>

int main() {

	std::cout << "1-appetizers" << " " << "2-Entrees" << " " << "3-Dessert"
			<< std::endl;

	std::cout << "Choose a menu option by entering the number here: "
			<< std::flush;

	int start_menu;
	std::cin >> start_menu;

	switch (start_menu) {
	case 1:
		std::cout << "1. Mozzarella Sticks" << std::endl << "2. Alligator Bites"
				<< std::endl << "3. Nachos" << std::endl << std::endl;

		std::cout << "select a menu item by entering its number here: "
				<< std::flush;

		int appetizer_menu;
		std::cin >> appetizer_menu;

		switch (appetizer_menu) {
		case 1:
			std::cout << std::endl
					<< "We will have your mozzarella sticks ready shortly!"
					<< std::endl;
			break;

		case 2:
			std::cout << std::endl
					<< "We will have your alligator bites ready shortly!"
					<< std::endl;
			break;

		case 3:
			std::cout << std::endl << "We will have your nachos ready shortly!"
					<< std::endl;
			break;
		}
		break;

	case 2:
	std::cout << "1. Chicken Tenders" << std::endl << "2. Meatballs"
			<< std::endl << "3. Ceviche" << std::endl;

	std::cout << std::endl << "Select an item by entering its number: "
			<< std::flush;

	int entree_menu;
	std::cin >> entree_menu;

	switch (entree_menu) {
	case 1:
		std::cout << std::endl
				<< "We will have your chicken tenders ready shortly!"
				<< std::endl;
		break;

	case 2:
		std::cout << std::endl << "We will have your Meatballs ready shortly!"
				<< std::endl;
		break;

	case 3:
		std::cout << std::endl << "We will have your Ceviche ready shortly!"
				<< std::endl;
		break;
	}
	break;

case 3:
std::cout << "1. Ice Cream" << std::endl << "2. Brownie" << std::endl
<< "3. Strawberry Cheesecake" << std::endl;

std::cout << "Enter the number of your selection here: " << std::flush;

int dessert_menu;
std::cin >> dessert_menu;

switch (dessert_menu) {
	case 1:
	std::cout << std::endl
	<< "We will have your ice cream ready shortly!"
	<< std::endl;
	break;

	case 2:
	std::cout << std::endl << "We will have your brownie ready shortly!"
	<< std::endl;
	break;

	case 3:
	std::cout << std::endl
	<< "We will have your strawberry cheesecake ready shortly!"
	<< std::endl;
	break;
}

break;

default:
std::cout << "Invalid number. Please enter a number 1-3." << std::endl;

}


std::cout << std::endl
<< "Would you like to order something else? Press Y or N. "
<< std::flush;


return 0;
}
