#ifndef PROPERTYMANAGER_H
#define PROPERTYMANAGER_H

#include <vector>
#include "Property.h"

class PropertyManager {
public:
    void addProperty(const Property& property);
    void viewProperties() const;
    Property* searchProperty(int id);
    void updateProperty(int id);
    void deleteProperty(int id);

    const std::vector<Property>& getProperties() const;

private:
    std::vector<Property> properties;
};

#endif // PROPERTYMANAGER_H

