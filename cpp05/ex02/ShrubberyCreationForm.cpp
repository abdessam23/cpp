/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:03:30 by abdo              #+#    #+#             */
/*   Updated: 2025/12/05 10:16:57 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string& target):AForm("Shrubbery Creation",0,145,137),target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other):AForm(other)
{
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
{
    (void) other;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (!this->getSign())
        throw ShrubberyCreationForm::signedExecpt();
    else if (executor.getGrade() > this->get_Gtx())
        throw ShrubberyCreationForm::GradeTooLowException();
    else{
        std::string target = this->getName() + "_shrubbery";
        std::ofstream file(target.c_str());
    for(int i = 0; i < 2;i++)
    {
        file << "\n\n";
        file<<"                             " << "    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠒⠉⠉⠉⢢⠤⠤⡀⢀⣀⣀⠀⡠⠖⠋⠉⠉⠒⢄⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⢀⠎⠀⠀⠀⠙⠄⠀⠀⠀⠀⠀⠈⡇⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠤⠐⠠⠄⡀⠀⠀⠀⢀⠄⠈⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠈⡇⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠀⡄⠀⠀⠀⠀⠀⠹⠔⠒⠢⠇⠀⠀⠀⠀⠀⠀⠠⠤⡖⠁⠘⡄⠀⠀⠀⠀⣠⣃⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⢀⡠⠤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀⠰⡄⠀⠀⠈⠁⠀⠙⣄⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⡔⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠁⠀⠀⠀⠀⠀⠀⡜⠂⠲⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠉⠀⠉⢢⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣞⠀⠀⠘⠒⠂⡀\n";
        file<<"                             " << "⠀⢀⡠⠐⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⠘⠂⠈⠆⠀⠀⠀⠀⠀⠀⠈⡆⠀⠀⠀⠀⡝\n";
        file<<"                             " << "⢠⠋⠀⠀⠀⡠⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⢄⣀⣀⡠⡂⠀⠀⠀⠠⡄⠀⠀⢀⡀⠀⢀⡰⠃⠀⠀⠀⠺⣅\n";
        file<<"                             " << "⡇⠀⠀⠀⠀⠣⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⡄⠀⠰⣀⡠⣀⠀⢀⣠⠎⠉⣹⣀⠀⠀⠀⠀⠀⣸\n";
        file<<"                             " << "⡇⠀⠀⠀⠀⢰⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣤⢷⠒⠂⠐⡎⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠁⠀⠉⢢⠀⢰⠊⠁\n";
        file<<"                             " << "⠘⢤⡤⠀⠀⠀⠑⠂⠐⢆⠀⣄⣀⣀⠀⠀⡀⢀⡴⠀⠀⡧⣀⠜⠑⠂⢺⢳⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡜⠐⠃⠀⠀\n";
        file<<"                             " << "⠀⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⢎⠀⠡⠀⠀⠱⡀⣠⠀⠀⡏⠈⢱⢲⠂⠀⠀⠀⠀⠀⠀⠀⠀⠱⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠱⣄⡀⣠⠃⠀⠀⠀⠀⠀⠀⠀⠉⢫⣁⢫⡳⢄⢣⠀⠀⠉⠀⠀⢰⠇⢀⠇⢾⡻⠖⢖⠁⠀⡀⡀⠀⢀⡼⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠸⡀⠀⠀⠀⠐⣄⣀⣀⡠⠎⠓⢯⡀⠀⢸⠀⠀⠀⠀⠀⣸⢁⠎⡴⡋⠀⠀⠀⡉⠉⠀⠈⡏⠁⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠉⠒⠒⠒⠋⠀⠀⠀⠀⠀⠀⠀⠹⡄⠀⠀⠀⠀⠀⠀⣿⢏⡾⠝⠓⠢⠤⠊⠈⠑⠒⠊⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀⡠⠄⣀⣿⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⢸⡜⣉⢿⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠸⡱⡻⡸⢸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢤⡤⢄⡀⠀⢀⣀⣀⢇⠀⠀⠀⠉⠈⠀⡎⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠠⢤⡤⠀⢘⡆⠈⠋⣑⣽⣾⠌⠀⠀⠀⠀⠀⠀⠣⣸⣄⠀⢹⡅⠀⠔⠪⠿⢤⣤⠀⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠐⠈⠉⠀⢀⣤⣖⣋⣁⣀⣋⣀⣀⠀⠒⠒⠄⠀⠀⠈⠈⠓⠦⢤⣀⠀⠀⠀⠀⠀⠑⠀⠀⠀⠀⠀⠀\n";
        file<<"                             " << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠒⠦⣄⣸⡟⠒⠒⠒⠒⠒⠚⠛⠀⠀⠀⠀⠀⢰⣶⣶⣶⣶⣶\n";
        file << "\n\n\n";
    }
    file.close();  
}
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}