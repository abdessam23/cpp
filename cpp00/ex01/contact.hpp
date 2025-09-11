#pragma once

#include <iostream>
#include <string>


class contact{
  private:
    std::string firstname;
    std::string lastname;
    std::string phonenumber;
    std::string nickname;
    std::string secret;
  public:
    void setfirstname(std::string str);
    void setlastname(std::string str);
    void setnickname(std::string str);
    void setphonenumber(std::string str);
    void setsecret(std::string str);
    std::string getfirstname();
    std::string getlastname();
    std::string getnickname();
    std::string getphonenumber();
    std::string getsecret();
};