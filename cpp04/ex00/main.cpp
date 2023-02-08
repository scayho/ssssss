/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:21:40 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/08 18:19:40 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->gettype() << " " << std::endl;
    std::cout << i->gettype() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    // Animal go;
    // Animal so;

    // std::cout << go.gettype() << std::endl;
    // go.settype("daisy");
    // go.makeSound();
    // std::cout << go.gettype() << std::endl;
    // so = go;

    // std::cout << "-------------------------------" << std::endl;
    
    // Cat ll;
    // Cat pp;
    
    // std::cout << ll.gettype() << std::endl;
    // ll.makeSound();
    // ll.settype("yasrasha");
    // std::cout << ll.gettype() << std::endl;
    // pp = ll;
    
    // std::cout << "-------------------------------" << std::endl;
    
    // Dog er;
    // Dog sw;
    
    // std::cout << er.gettype() << std::endl;
    // er.makeSound();
    // er.settype("yama");
    // std::cout << er.gettype() << std::endl;
    // sw = er;
    
}