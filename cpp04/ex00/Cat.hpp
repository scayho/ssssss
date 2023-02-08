/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:26:32 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/08 16:41:32 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
    public :
        Cat();
        Cat(std::string name);
        ~Cat();
        Cat(Cat const & anima);
        void makeSound();
        Cat  &operator = (const Cat &s);
};

#endif