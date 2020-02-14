#include "ShoppingCart.h"

ShoppingCart::ShoppingCart(){ // default constructor
   customerName = "none"; //default name
   currentDate = "January 1, 2016"; //default date
   return;  
}

ShoppingCart::ShoppingCart(string name, string date){
	customerName = name;
	currentDate = date;
	return;
}

//function to get customer name
string ShoppingCart::GetCustomerName(){
	return customerName;
}

//function to get current date
string ShoppingCart::GetDate(){
	return currentDate;
}

//function to add item to cart
void ShoppingCart::AddItem(ItemToPurchase item){
	cartItems.push_back(item);
	return;
}

//function to remove item from cart
void ShoppingCart::RemoveItem(ItemToPurchase item1, string itemsName){
	int index=0;
	for(int i=0; i<cartItems.size(); i++){
		if((cartItems.at(i)).GetName() == itemsName)
			index=i;
	}
	
	if((cartItems.at(index)).GetName() != "none")
		cartItems.erase(cartItems.begin() + index);
	else
		cout << "Item not found in cart. Nothing removed.\n";
	return;
}

//function to change quantity of item
void ShoppingCart::ModifyItem(ItemToPurchase item2){
	for(int i=0; i<cartItems.size(); i++){
		if((cartItems.at(i)).GetName() == item2.GetName()) {
            cartItems.at(i).SetQuantity(item2.GetQuantity());
            return;
        }
	}
    
	return;
}

//function to get number of items in cart
int ShoppingCart::GetNumItemsInCart(){
	int size=0;
	for(int i=0; i<cartItems.size(); i++){
		size = size + (cartItems.at(i)).GetQuantity();
	}
	return size;
}

//function to get total of items in cart
int ShoppingCart::GetCostOfCart(){
	int total=0;
	for(int i=0; i<cartItems.size(); i++){
		total = total + (cartItems.at(i)).GetPrice();
	}
	return total;
}

//function to print total of items in cart
void ShoppingCart::PrintTotal(){
	if(cartItems.size() == 0){
		cout << "SHOPPING CART IS EMPTY\n";
	}
	else{
		cout << "OUTPUT SHOPPING CART\n";
		cout << customerName << "'s Shopping Cart - " << currentDate << endl;
		cout << "Number of Items: " << cartItems.size() << endl << endl;
	
		int cartTotal = 0;
	
		for(int i=0; i<cartItems.size(); i++){
			int total = (cartItems.at(i)).GetPrice() * (cartItems.at(i)).GetQuantity();
			cout << (cartItems.at(i)).GetName() << " " << (cartItems.at(i)).GetQuantity() << " @ $" << (cartItems.at(i)).GetPrice() << " = $" << total << endl;
			cartTotal = cartTotal + total;
		}
		
		cout << "Total: $" << cartTotal << endl;
	}
	return;
}

//function to print descripton of each item in cart
void ShoppingCart::PrintDescriptions(){
	cout << customerName << "'s Shopping Cart - " << currentDate << endl;
	cout << "Item Descriptions\n";
	for(int i=0; i<cartItems.size(); i++){
		cout << (cartItems.at(i)).GetName() << ": ";
		cout << (cartItems.at(i)).GetDescription() << endl;;
	}
	return;
}
