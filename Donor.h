#ifndef DONOR_H
#define DONOR_H

#include <string>

class Donor {
public:
    int donorId, district,bloodType;
    std::string name, address, number;

    void donorDetails() const;

    static Donor parseLine(const std::string& line);

private:
    static std::string trim(const std::string& str);
};

#endif // DONOR_H
