//include header file
#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){ // default constructor
   itemName = "none"; //default name
   itemPrice = 0; //default price
   itemQuantity = 0; //default quantity
   itemDescription = "none";//default description
   return;  
}

//function to set name to string read in from user
void ItemToPurchase::SetName(string name){
   itemName = name;   
   return;
}

//function to get the name of item
string ItemToPurchase::GetName(){
   return itemName;  
}

//function to set price to price read in from user
void ItemToPurchase::SetPrice(int price){
   itemPrice = price;
   return;
}

//function to get price of item
int ItemToPurchase::GetPrice(){
   return itemPrice;
}

//function to set quantity to number read in from user
void ItemToPurchase::SetQuantity(int quant){
   itemQuantity = quant;
   return;
}
//funcution to get quantity of item
int ItemToPurchase::GetQuantity(){
   return itemQuantity;
}
//function to set description to description read in from user
void ItemToPurchase::SetDescription(string describe){
	itemDescription = describe;
	return;
}

//function to get description of item
string ItemToPurchase::GetDescription(){
	return itemDescription;
}

//function to print cost of item
void ItemToPurchase::PrintItemCost(){
	cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity*itemPrice) << endl;
	return;
}

//function to print description of item and item name
void ItemToPurchase::PrintItemDescription(){
	cout << itemName << ": " << itemDescription << endl;
	return;
}