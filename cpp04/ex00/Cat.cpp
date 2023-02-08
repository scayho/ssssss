/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:52:59 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/08 16:39:56 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "default constructor of Cat" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "default desconstructor of Cat" << std::endl;
}

Cat::Cat(std::string name)
{
    std::cout << " paramitrized constructor of Cat" << std::endl;
    this->type = name;
}

Cat::Cat(Cat const & anima)
{
    std::cout << " copy constructor of Cat" << std::endl;
    this->type = anima.gettype();
}


void Cat::makeSound()
{
    std::cout << "========================" << std::endl;
    std::cout << "cats don't bark" << std::endl;
    std::cout << "========================" << std::endl;
}


Cat  &Cat::operator = (const Cat &s)
{
    std::cout << "copy assignement operator of Cat called !" << std::endl;
    this->type = s.gettype();
    return (*this);
} 