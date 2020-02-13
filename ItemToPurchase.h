#include <iostream>
#include <string>
#include <vector>
using namespace std;

//define class
class ItemToPurchase{
   public:
      void SetName(string name);//function to set name
      string GetName();//function to get name
      void SetPrice(int price);//function to set price
      int GetPrice();//function to get price
      void SetQuantity(int quant);//function to set quantity
      int GetQuantity();//function to get quantity
      void SetDescription(string describe);//function to set description to description read in from user
	  string GetDescription();//function to get description of item
	  void PrintItemCost();//function to print cost of item
	  void PrintItemDescription();//function to print description of item and item name
	  ItemToPurchase(); //default contructor
   private: 
      string itemName;//string for name of item
      int itemPrice;//number for price of item
      int itemQuantity;//number for quantity
	  string itemDescription;
};