#include "Property.h"
#include <iostream>

Property::Property(int id, std::string address, int bedrooms, int bathrooms, double rent,
                   std::string tenant, std::string leaseStart, std::string leaseEnd)
    : id(id), address(address), bedrooms(bedrooms), bathrooms(bathrooms), rent(rent),
      tenant(tenant), leaseStart(leaseStart), leaseEnd(leaseEnd) {}

int Property::getId() const { return id; }
std::string Property::getAddress() const { return address; }
int Property::getBedrooms() const { return bedrooms; }
int Property::getBathrooms() const { return bathrooms; }
double Property::getRent() const { return rent; }
std::string Property::getTenant() const { return tenant; }
std::string Property::getLeaseStart() const { return leaseStart; }
std::string Property::getLeaseEnd() const { return leaseEnd; }

void Property::setAddress(const std::string& addr) { address = addr; }
void Property::setBedrooms(int bdr) { bedrooms = bdr; }
void Property::setBathrooms(int bth) { bathrooms = bth; }
void Property::setRent(double rnt) { rent = rnt; }
void Property::setTenant(const std::string& tnt) { tenant = tnt; }
void Property::setLeaseStart(const std::string& start) { leaseStart = start; }
void Property::setLeaseEnd(const std::string& end) { leaseEnd = end; }

void Property::display() const {
    std::cout << "ID: " << id << "\nAddress: " << address
              << "\nBedrooms: " << bedrooms << "\nBathrooms: " << bathrooms
              << "\nRent: $" << rent << "\nTenant: " << tenant
              << "\nLease Start: " << leaseStart << "\nLease End: " << leaseEnd << "\n";
}

