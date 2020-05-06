#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	int inches;
	int numberOfToppings = 0;

	string firstName;
	string crust = "Hand-Tossed";
	string toppings;

	string t1,t2,t3,t4,t5;
	

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

	switch (crustType)
	{
	case'H':
	case'h':
		crust = "Hand-Tossed";
		break;

	case'T':
	case't':
		crust = "Thin-Crust";
		break;

	case'D':
	case'd':
		crust = "Deep-Dish";
		break;

	default:
		cout << "That input is not available. A Hand-Tossed crust will be made" << endl;
	}

	cout << "All pizzas come with cheese.\n";
	t1 = "Cheese\n";
	cout << "Additional toppings are $1.25 each,\n" <<
		"Choose from: Pepperoni, Sausage, Onion, Mushroom\n";
	cout << "";

	cout << "Do you want Pepperoni?   (Y/N):   ";
	cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		numberOfToppings += 1;
		t2 = "Pepperoni\n";
	
	}

	cout << "Do you want Sausage?   (Y/N):   ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		numberOfToppings += 1;
		t3 = "Sausage\n";

	}

	cout << "Do you want Onions?   (Y/N):   ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		numberOfToppings += 1;
		t4 = "Onions\n";

	}

	cout << "Do you want Mushroom?   (Y/N):   ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		numberOfToppings += 1;
		t5 =  "Mushroom\n";

	}

	cost = cost + (1.25 * numberOfToppings);

	cout << endl;
	cout << "Hello "<< firstName << ". Your order is as follows:\n" << endl;
	cout << inches << " Inch pizza\n";
	cout << crust << endl;
	toppings = t1 + t2 + t3 + t4 + t5;

	cout << "With: " << toppings << endl;

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
