#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	int inches;
	int numberOfToppings = 0;

	string firstName;
	string crust = "Hand-tossed";
	//string toppings = "Cheese";
	string toppings[6];

	double tax;
	double cost = 12.99;
	double TAX_RATE = .0825;

	char crustType;
	char choice;

	int end;


	cout << "Welcome to Mike and Michelle's Pizza\n";
	cout << "Please enter your Name:   ";
	getline(cin, firstName);
	
	cout << "Pizza Size (Inches)    Cost\n";
	cout << "Pizza Size   10       $10.99\n";
	cout << "Pizza Size   12       $12.99\n";
	cout << "Pizza Size   14       $14.99\n";
	cout << "Pizza Size   16       $16.99\n" << endl;
	cout << "What size of pizza would you like?\n";
	cout << "10, 12, 14 or 16 inches (enter the number only): \n";
	cin >> inches;
	cout << endl;
	if (inches == 10 ) {
		cost = 10.99;

	}

	if (inches == 12) {
		cost = 12.99;

	}

	if (inches == 14) {
		cost = 14.99;

	}

	if (inches == 16) {
		cost = 16.99;

	}

	cout << "What type of crust do you want?\n";
	cout << "(H) Hand-Tossed, (T) Thin-Crust, or " <<
		"(D) Deep-Dish \n Enter H, T or D:   ";
	cin >> crustType;
	cout << endl;
	if (crustType == 'H' || crustType == 'h') {
		crust = "Hand-Tossed";

	}
	if (crustType == 'T' || crustType == 't') {
		crust = "Thin-Crust";

	}
	if (crustType == 'D' || crustType == 'd') {
		crust = "Deep-Dish";

	}

	cout << "All pizzas come with cheese.\n";
	toppings[0] == "Cheese";
	cout << "Additional toppings are $1.25 each,\n" <<
		"Choose from: Pepperoni, Sausage, Onion, Mushroom\n";
	cout << "";

	cout << "Do you want Pepperoni?   (Y/N):   ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		numberOfToppings += 1;
		toppings[1] == "Pepperoni";
	
	}

	cout << "Do you want Sausage?   (Y/N):   ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		numberOfToppings += 1;
		toppings[2] == "Sausage";

	}

	cout << "Do you want Onions?   (Y/N):   ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		numberOfToppings += 1;
		toppings[3] == "Onions";

	}

	cout << "Do you want Mushroom?   (Y/N):   ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		numberOfToppings += 1;
		toppings[4] ==  "Mushroom";

	}

	cost = cost + (1.25 * numberOfToppings);

	cout << endl;
	cout << "Hello "<< firstName << ". Your order is as follows:\n" << endl;
	cout << inches << " Inch pizza\n";
	cout << crust << " crust\n";
	cout << toppings[0]<<" " << toppings[1] << " " << toppings[2] << " " << toppings[3] << " " << toppings[4] << endl;

	cout << "The cost of your order is: $ " << cost << endl;
	tax = cost * TAX_RATE;

	cost = std::ceil(cost * 100.0) / 100.0;
	tax = std::ceil(tax * 100.0) / 100.0;

	cout << "The tax is: $ " << tax << endl;
	cout << "Your order total is: $ " << tax + cost << endl;
	cout << "Your order will be ready in 30 min\n" <<
		"Thank You!";

	cout << endl;
	cout << "Enter 'e' to end program";
	cin >> end;



	return 0;

}
