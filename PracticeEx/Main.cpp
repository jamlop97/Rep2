#include<iostream>
#include"List.h"

void Menu() {

	std::cout << "------------Main Menu-------------" << std::endl;

	std::cout << "'n' - add a new list value" << std::endl;

	std::cout << "'d' - delete a list value." << std::endl;

	std::cout << "'r' - reverse the list order." << std::endl;

	std::cout << "'p' - print the list." << std::endl;

	std::cout << "'e' - exit the program." << std::endl;

	std::cout << "----------------------------------" << std::endl;
}

int main()
{
	std::cout << "-------Linked List Builder--------" << std::endl;
	List myList;
	char input = 0;
	Menu();

	//Main linked list input loop
	while (input != 'e')
	{
		std::cin >> input;
		//new node subroutine
		if (input == 'n')
		{
			std::cout << "Input an integer. You may input several in a row." << std::endl;
			std::cout << "'-1' - to stop entering integers and go back to main menu." << std::endl;
			int n = 0;

			while (1) {

				std::cin >> n;

				if (n == -1) {
					Menu();
					break;
				}

				else
				{
					myList.addNode(n);
				}

			}


		}
		//delete node subroutine
		else if (input == 'd')
		{

			std::cout << "Input an integer to be deleted. You may input several in a row." << std::endl;
			std::cout << "'-1' - to stop entering integers and go back to main menu." << std::endl;
			int n = 0;

			while (1) {

				std::cin >> n;

				if (n == -1) {
					Menu();
					break;
				}

				else
				{
					myList.delNode(n);
				}

			}

		}
		//reverse list subroutine
		else if (input == 'r')
		{
			myList.Reverse();
			std::cout << "The list has been reversed. Select another menu item." << std::endl;
		}
		//print list subroutine
		else if (input == 'p')
		{
			myList.printList();
		}
		//invalid input subroutine
		else
		{
			std::cout << "This is not a valid input. Please select one of the menu options." << std::endl;
		}



		std::cin.get();

	}


}