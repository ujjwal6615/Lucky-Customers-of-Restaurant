#include <bits/stdc++.h>
using namespace std;

float total = 0;

void choices();

void vegetarian()
{
    cout << "List of Veg foods with their prices are as follows : " << endl
         << endl;
    cout << "Enter your choices :  " << endl;
    cout << "1. Plain Roti............................ Rs 3 per piece" << endl;
    cout << "2. Butter Naan............................Rs 20 per piece" << endl;
    cout << "3. Mix Veg................................Rs 100 per full bowl" << endl;
    cout << "4. Paneer Butter Masala...................Rs 120 per bowl" << endl;
    cout << "5. Soya Chilli............................Rs 80 per bowl" << endl;
    cout << "6. Palak Paneer...........................Rs 130 per bowl" << endl
         << endl;
    ;
    cout << "7. Confirm Your Order and Go back" << endl
         << endl;

    int select;
    cin >> select;
    if (select == 1)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 3 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        vegetarian();
    }
    else if (select == 2)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 20 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        vegetarian();
    }
    else if (select == 3)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 100 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        vegetarian();
    }
    else if (select == 4)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 120 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        vegetarian();
    }
    else if (select == 5)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 80 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        vegetarian();
    }
    else if (select == 6)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 130 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        vegetarian();
    }
    else if (select == 7)
    {
        choices();
    }
    else
    {
        cout << "Invalid input, Please Try Again...!!!!!" << endl
             << endl;
        vegetarian();
    }
}

void nonVegetarian()
{
    cout << "List of Non-Veg foods with their prices are as follows : " << endl
         << endl;
    cout << "Enter your choices :  " << endl;
    cout << "1. Plain Roti.............................Rs 3 per piece" << endl;
    cout << "2. Butter Naan............................Rs 20 per piece" << endl;
    cout << "3. Butter Chicken.........................Rs 150 per full bowl" << endl;
    cout << "4. Chicken Tikka Masala...................Rs 130 per bowl" << endl;
    cout << "5. Chicken Chilli.........................Rs 100 per bowl" << endl;
    cout << "6. Chicken Kadai..........................Rs 140 per bowl" << endl
         << endl;
    ;
    cout << "7. Confirm Your Order and Go back" << endl
         << endl;

    int select;
    cin >> select;
    if (select == 1)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 3 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        nonVegetarian();
    }
    else if (select == 2)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 20 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        nonVegetarian();
    }
    else if (select == 3)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 150 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        nonVegetarian();
    }
    else if (select == 4)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 130 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        nonVegetarian();
    }
    else if (select == 5)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 100 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        nonVegetarian();
    }
    else if (select == 6)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 140 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        nonVegetarian();
    }
    else if (select == 7)
    {
        choices();
    }
    else
    {
        cout << "Invalid input, Please Try Again...!!!!!" << endl
             << endl;
        nonVegetarian();
    }
}

void desserts()
{
    cout << "List of Desserts and Beverages with their prices are as follows : " << endl
         << endl;
    cout << "Enter your choices :  " << endl;
    cout << "1 : Chocolate / Vanilla Ice-Cream................Rs 35 per Qty" << endl;
    cout << "2 : Sweets (Gulabjamun / Rasogulla)..............Rs 20 per piece" << endl;
    cout << "3 : Soft Drinks..................................Rs 15 per Qty" << endl
         << endl;
    cout << "4 : Confirm Your Order and Go back" << endl
         << endl;
    int select;
    cin >> select;
    if (select == 1)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 35 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        desserts();
    }
    else if (select == 2)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 20 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        desserts();
    }
    else if (select == 3)
    {
        int Qty;
        cout << "Enter Quantity : ";
        cin >> Qty;
        int current = 15 * Qty;
        total = total + current;
        cout << "\n\nCurrent total is : "
             << "Rs " << total << endl
             << endl;

        desserts();
    }
    else if (select == 4)
    {
        choices();
    }
    else
    {
        cout << "Invalid input, Please Try Again...!!!!!" << endl
             << endl;
        desserts();
    }
}

void game()
{
    if (total < 100)
    {
        cout << "Your bill is too low...!!!!! Min. Bill should be Rs 100 to avail this offer." << endl
             << endl;
        choices();
    }
    else
    {
        cout << "Enter a number from 1 to 5 and if your number matches with our lucky draw number you will get 15% discount on your bill." << endl
             << endl;
        cout << "Enter your number from 1 to 5 : ";
        int num;
        cin >> num;
        int n = (rand() % 5) + 1;

        if (num == n)
        {
            cout << "Your Number : " << num << " Lucky draw number : " << n << endl
                 << endl;
            cout << "Congratulations , you have been rewarded with 15% discount on your bill." << endl
                 << endl;
            total = total - (total * 0.15);
            return;
        }
        else
        {
            cout << "Your Number : " << num << " Lucky draw number : " << n << endl
                 << endl;
            cout << "Sorry , better luck next time....!!!!!" << endl;
            cout << "You can confirm your order now" << endl
                 << endl;
            return;
        }
    }
}

void choices()
{
    cout << "Press 1 : Vegetarian Food" << endl;
    cout << "Press 2 : Non-Vegetarian Food" << endl;
    cout << "Press 3 : Desserts and Beverages" << endl;
    cout << "Press 4 : Remove your current order and Place a new order again" << endl;
    cout << "Press 5 : View Your Total Bill" << endl;
    cout << "Press 6 : Play a Guessing game , and get a chance to have 15% discount on your order" << endl;
    cout << "Press 7 : Complete Your Order" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        vegetarian();
    }
    else if (choice == 2)
    {
        nonVegetarian();
    }
    else if (choice == 3)
    {
        desserts();
    }
    else if (choice == 4)
    {
        total = 0;
        cout << "Your last order was removed and you can now place a new order again...!!!!!!" << endl
             << endl;
        choices();
    }
    else if (choice == 5)
    {
        cout << "Currently Your Bill Is : Rs " << total << endl
             << endl;
        choices();
    }
    else if (choice == 6)
    {
        game();
    }
    else if (choice == 7)
    {
        return;
    }
    else
    {
        cout << "Invalid Input , Please try again...!!!!!" << endl
             << endl;
        choices();
    }
    return;
}

int main()
{
    cout << "...................Welcome to Food Court........................" << endl
         << endl;
    choices();
    cout << "\nTOTAL BILL ........................Rs " << total << endl;
    cout << "\nThank You And Have A Nice Day.....!!!!!!" << endl;
    return 0;
}