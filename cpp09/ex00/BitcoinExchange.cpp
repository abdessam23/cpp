/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:32:47 by abhimi            #+#    #+#             */
/*   Updated: 2026/03/31 23:54:20 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& str) : str(str) {}

BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange&){} 
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange&){ return *this;}  
void BitcoinExchange::find_data(const std::string& line)  
{
    size_t pos = line.find(",");
    if (pos == std::string::npos)
        return;

    std::string date = line.substr(0, pos);
    float f;
    std::stringstream ss(line.substr(pos + 1));
    ss >> f;
    mp.insert(std::make_pair(date, f));
}

void BitcoinExchange::check_value(float value) const
{
    if (value < 0)
        throw std::runtime_error("Error: not a positive number.");
    if (value > 1000)
        throw std::runtime_error("Error: too large a number.");
}

void BitcoinExchange::check_date(int y, int m, int d) const
{
    int days_in_month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (y < 2009 || y > 2027)
        throw std::runtime_error("Error: year out of range.");
    if (m < 1 || m > 12)
        throw std::runtime_error("Error: invalid month.");
    if (d < 1 || d > days_in_month[m - 1])
        throw std::runtime_error("Error: invalid day.");
}

void BitcoinExchange::find_result(const std::string& date, float value) const              
{
    std::map<std::string, float>::const_iterator it = mp.lower_bound(date);

    if (it == mp.end() || it->first != date)
    {
        if (it == mp.begin())
            throw std::runtime_error("Error: no rate data before => " + date);
        --it;
    }
    std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}

void BitcoinExchange::read_data(const std::string& data) 
{
    std::string  line;
    std::ifstream database(data.c_str());

    if (!database.is_open())
        throw std::runtime_error("Error: could not open database file.");

    while (std::getline(database, line))
    {
        if (line.find("date") != std::string::npos)
            continue;
        find_data(line);
    }
}

void BitcoinExchange::read_input()
{
    std::string   line;
    std::ifstream file(str.c_str());

    if (!file.is_open())
        throw std::runtime_error("Error: could not open file.");

    while (std::getline(file, line))
    {
        if (line == "date | value" || line.empty())
            continue;

        int   y, m, d;
        char  dash1, dash2, pipe;
        float value;

        std::stringstream ss(line);
        if (!(ss >> y >> dash1 >> m >> dash2 >> d >> pipe >> value)
            || dash1 != '-' || dash2 != '-' || pipe != '|')
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        try {
            check_date(y, m, d);
            check_value(value);

            std::stringstream date_ss;
            date_ss << y << "-"
                    << (m < 10 ? "0" : "") << m << "-"
                    << (d < 10 ? "0" : "") << d;
            find_result(date_ss.str(), value);
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
}