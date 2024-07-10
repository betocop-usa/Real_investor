#ifndef PROPERTY_H
#define PROPERTY_H

#include <string>

class Property {
public:
    Property(int id, std::string address, int bedrooms, int bathrooms, double rent,
             std::string tenant, std::string leaseStart, std::string leaseEnd);

    int getId() const;
    std::string getAddress() const;
    int getBedrooms() const;
    int getBathrooms() const;
    double getRent() const;
    std::string getTenant() const;
    std::string getLeaseStart() const;
    std::string getLeaseEnd() const;

    void setAddress(const std::string& addr);
    void setBedrooms(int bdr);
    void setBathrooms(int bth);
    void setRent(double rnt);
    void setTenant(const std::string& tnt);
    void setLeaseStart(const std::string& start);
    void setLeaseEnd(const std::string& end);

    void display() const;

private:
    int id;
    std::string address;
    int bedrooms;
    int bathrooms;
    double rent;
    std::string tenant;
    std::string leaseStart;
    std::string leaseEnd;
};

#endif // PROPERTY_H

