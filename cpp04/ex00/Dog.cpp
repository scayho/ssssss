/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:58:00 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/08 16:40:04 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "default constructor of Dog" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "default desconstructor of Dog" << std::endl;
}

Dog::Dog(std::string name)
{
    std::cout << " paramitrized constructor of Dog" << std::endl;
    this->type = name;
}

Dog::Dog(Dog const & anima)
{
    std::cout << " copy constructor of Dog" << std::endl;
    this->type = anima.gettype();
}


void Dog::makeSound()
{
    std::cout << "========================" << std::endl;
    std::cout << "Dogs don't miaow" << std::endl;
    std::cout << "========================" << std::endl;
}


Dog  &Dog::operator = (const Dog &s)
{
    std::cout << "copy assignement operator of Dog called !" << std::endl;
    this->type = s.gettype();
    return (*this);
} 