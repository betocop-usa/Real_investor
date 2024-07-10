#include <iostream>
#include "Property.h"
#include "PropertyManager.h"

void showMenu() {
    std::cout << "1. Add Property\n"
              << "2. View Properties\n"
              << "3. Search Property by ID\n"
              << "4. Update Property\n"
              << "5. Delete Property\n"
              << "6. Exit\n"
              << "Enter Option: ";
}

int main() {
    PropertyManager manager;
    int choice;

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int id, bedrooms, bathrooms;
            double rent;
            std::string address, tenant, leaseStart, leaseEnd;

            std::cout << "Enter property ID: ";
            std::cin >> id;
            std::cout << "Enter address: ";
            std::cin.ignore();
            std::getline(std::cin, address);
            std::cout << "Enter number of bedrooms: ";
            std::cin >> bedrooms;
            std::cout << "Enter number of bathrooms: ";
            std::cin >> bathrooms;
            std::cout << "Enter rent: ";
            std::cin >> rent;
            std::cout << "Enter tenant name: ";
            std::cin.ignore();
            std::getline(std::cin, tenant);
            std::cout << "Enter lease start date: ";
            std::getline(std::cin, leaseStart);
            std::cout << "Enter lease end date: ";
            std::getline(std::cin, leaseEnd);

            Property property(id, address, bedrooms, bathrooms, rent, tenant, leaseStart, leaseEnd);
            manager.addProperty(property);

            std::cout << "Property added successfully.\n";
            break;
        }
        case 2:
            manager.viewProperties();
            break;
        case 3: {
            int id;
            std::cout << "Enter property ID: ";
            std::cin >> id;
            Property* property = manager.searchProperty(id);
            if (property) {
                property->display();
            } else {
                std::cout << "Property not found.\n";
            }
            break;
        }
        case 4: {
            int id;
            std::cout << "Enter property ID to update: ";
            std::cin >> id;
            manager.updateProperty(id);
            break;
        }
        case 5: {
            int id;
            std::cout << "Enter property ID to delete: ";
            std::cin >> id;
            manager.deleteProperty(id);
            break;
        }
        case 6:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}

