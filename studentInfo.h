//
// Created by Istiak Ahmed Seyam on 18/3/20.
//

#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include <string>
class student{
private:
    int id;
    std::string name;
    float cg;
public:
    int getId() const;

    const std::string &getName() const;

    float getCg() const;

public:
    student();
    void value(int ,std::string,float);
    void printInfo();
    bool operator== (student);
    bool operator!= (student);
};

#endif //LABMID_STUDENTINFO_H
