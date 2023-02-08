/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:22:05 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/08 18:20:28 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected :
        std::string type;
    public :
        Animal();
        Animal(std::string name);
        ~Animal();
        Animal(Animal const & anima);
        virtual void makeSound() = 0;
        Animal  &operator = (const Animal &s);
        std::string gettype(void) const ;
        void settype(std::string name);
};

#endif