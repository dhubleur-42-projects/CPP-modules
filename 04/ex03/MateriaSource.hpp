/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:45:15 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 11:52:09 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &src);
        ~MateriaSource(void);

        MateriaSource       &operator= (const MateriaSource &rhs);

		virtual int getInventoryCount() const;

        virtual void        learnMateria(AMateria *m);
        virtual AMateria    *createMateria(const std::string &type);

    private:
        AMateria            *_inventory[4];
        int                 _inventoryCount;
};

#endif