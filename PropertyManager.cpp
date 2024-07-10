#include <iostream>
#include <vector>
#include <algorithm>
#include "Property.h"
#include "PropertyManager.h"

class PropertyManager {
public:
    void addProperty(const Property& property) {
        properties.push_back(property);
    }

    void viewProperties() const {
        for (const auto& property : properties) {
            property.display();
            std::cout << "---------------------\n";
        }
    }

    Property* searchProperty(int id) {
        for (auto& property : properties) {
            if (property.getId() == id) {
                return &property;
            }
        }
        return nullptr;
    }

    void updateProperty(int id) {
        Property* property = searchProperty(id);
        if (property) {
            std::string address;
            int bedrooms, bathrooms;
            double rent;
            std::string tenant, leaseStart, leaseEnd;

            std::cout << "Enter new address: ";
            std::cin.ignore();
            std::getline(std::cin, address);
            property->setAddress(address);

            std::cout << "Enter new number of bedrooms: ";
            std::cin >> bedrooms;
            property->setBedrooms(bedrooms);

            std::cout << "Enter new number of bathrooms: ";
            std::cin >> bathrooms;
            property->setBathrooms(bathrooms);

            std::cout << "Enter new rent: ";
            std::cin >> rent;
            property->setRent(rent);

            std::cout << "Enter new tenant name: ";
            std::cin.ignore();
            std::getline(std::cin, tenant);
            property->setTenant(tenant);

            std::cout << "Enter new lease start date: ";
            std::getline(std::cin, leaseStart);
            property->setLeaseStart(leaseStart);

            std::cout << "Enter new lease end date: ";
            std::getline(std::cin, leaseEnd);
            property->setLeaseEnd(leaseEnd);

            std::cout << "Property updated successfully.\n";
        } else {
            std::cout << "Property not found.\n";
        }
    }

    void deleteProperty(int id) {
        auto it = std::remove_if(properties.begin(), properties.end(),
            [id](const Property& property) { return property.getId() == id; });

        if (it != properties.end()) {
            properties.erase(it, properties.end());
            std::cout << "Property deleted successfully.\n";
        } else {
            std::cout << "Property not found.\n";
        }
    }

private:
    std::vector<Property> properties;
};

