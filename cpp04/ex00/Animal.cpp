/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:30:35 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/08 18:20:36 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default constructor of Animal" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "default desconstructor of Animal" << std::endl;
}   

Animal::Animal(std::string name)
{
    std::cout << " paramitrized constructor of Animal" << std::endl;
    this->type = name;
}

Animal::Animal(Animal const & anima)
{
    std::cout << " copy constructor of Animal" << std::endl;
    this->type = anima.gettype();
}


// void Animal::makeSound()
// {
//     std::cout << "========================" << std::endl;
//     std::cout << "animals talking with their species's language" << std::endl;
//     std::cout << "========================" << std::endl;
// }


Animal  &Animal::operator = (const Animal &s)
{
    std::cout << "copy assignement operator of Animal called !" << std::endl;
    this->type = s.gettype();
    return (*this);
} 



std::string Animal::gettype(void) const
{
    return (this->type);
}

void Animal::settype(std::string name)
{
    this->type = name;
}