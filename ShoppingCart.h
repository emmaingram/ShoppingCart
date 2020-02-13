#include "ItemToPurchase.h"

class ShoppingCart{
	public:
		string GetCustomerName();
		string GetDate();
		void AddItem(ItemToPurchase item);
		void RemoveItem(ItemToPurchase item1, string itemsName);
		void ModifyItem(ItemToPurchase item2);
		int GetNumItemsInCart();
		int GetCostOfCart();
		void PrintTotal();
		void PrintDescriptions();
		ShoppingCart(); //default contructor
		ShoppingCart(string name, string date);//parameterized constructor
	private:
		string customerName;
		string currentDate;
		vector <ItemToPurchase> cartItems;
};