//include header file
#include "ShoppingCart.h"

int main(){
   //variables for name and date and item info
   string name, date, itemname, itemdescription;
   
   //variables for item price and quantity
   int itemprice, itemquant;
   
   //variable for menu option
   char option;
   
   //variable for items
   ItemToPurchase item;
   
   //prompt for customer name
   cout << "Enter customer's name:\n";
   //read in customer name
   getline(cin, name);
   
   //prompt for and read in today's date
   cout << "Enter today's date:\n";
   getline(cin, date);
   
   //create object of type ShoppingCart
   ShoppingCart cart(name, date);

   cout << "Customer name: " << cart.GetCustomerName() << endl;
   cout << "Today's date: " << cart.GetDate() << endl;
   
   cout << "MENU\n";
   cout << "a - Add item to cart\n";
   cout << "b - Remove item from cart\n";
   cout << "c - Change item quantity\n";
   cout << "i - Output items' descriptions\n";
   cout << "o - Output shopping cart\n";
   cout << "q - Quit\n";

   do{
		cout << "Choose an option\n";
		cin >> option;
		
		cout << endl;
   
		cin.ignore();
		
		if(option == 'a' || option == 'A'){
		   cout << "ADD ITEM TO CART\n";
		   
		   cout << "Enter the item name:\n";
		   getline(cin, itemname);
		   item.SetName(itemname);

		   cout << "Enter the item description:\n";
		   getline(cin, itemdescription);
		   item.SetDescription(itemdescription);

		   cout << "Enter the item price:\n";
		   cin >> itemprice;
		   item.SetPrice(itemprice);

		   cout << "Enter the item quantity:\n";
		   cin >> itemquant;
		   item.SetQuantity(itemquant);

		   cart.AddItem(item);

		   cin.ignore();
		   
		   cout << endl;
	   }else if(option == 'b' || option == 'B'){
		   cout << "REMOVE ITEM FROM CART\n";
		   
		   cout << "Enter the item name:\n";
		   getline(cin, itemname);
		   item.SetName(itemname);

		   cart.RemoveItem(item, itemname);
		   
		   cout << endl;
	   }else if(option == 'c' || option == 'C'){
		   cout << "CHANGE ITEM QUANTITY\n";
		   
		   cout << "Enter the item name:\n";
		   getline(cin, itemname);
		   item.SetName(itemname);
           
           string newQuant;
           cout << "Enter new quantity:\n";
		   getline(cin, newQuant);
		   item.SetQuantity(stoi(newQuant));

		   cart.ModifyItem(item);
		   
		   cout << endl;
	   }else if(option == 'i' || option == 'I'){
		   cout << "OUTPUT DESCRIPTIONS\n";

		   cart.PrintDescriptions();
		   
		   cout << endl;
	   }else if(option == 'o' || option == 'O'){
		   cart.PrintTotal();
		   
		   cout << endl;
	   }
       
   }while(option != 'q' && option != 'Q');
   
   cout << endl;
   
   cart.PrintTotal();
   
   return 0;  
}