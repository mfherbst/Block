/*                                                                           
Developed by Sandeep Sharma and Garnet K.-L. Chan, 2012                      
Copyright (c) 2012, Garnet K.-L. Chan                                        
                                                                             
This program is integrated in Molpro with the permission of 
Sandeep Sharma and Garnet K.-L. Chan
*/

#ifndef NPDM_PERMUTATIONS_H
#define NPDM_PERMUTATIONS_H

#include <vector>
#include <multiarray.h>
#include "spinblock.h"
#include "wavefunction.h"
#include "BaseOperator.h"
#include <algorithm>
#include "npdm_epermute.h"

namespace SpinAdapted{

//===========================================================================================================================================================

class Npdm_permutations {
  public:
    Npdm_permutations() {}
    virtual ~Npdm_permutations() {}
    virtual std::map< std::vector<int>, int > get_spin_permutations( const std::vector<int>& indices ) = 0;
};

//===========================================================================================================================================================

class Onepdm_permutations : public Npdm_permutations {
  public:
    std::map< std::vector<int>, int > get_spin_permutations( const std::vector<int>& indices );
};

//===========================================================================================================================================================

class Twopdm_permutations : public Npdm_permutations {
  public:
    std::map< std::vector<int>, int > get_spin_permutations( const std::vector<int>& indices );
};

//===========================================================================================================================================================

class Threepdm_permutations : public Npdm_permutations {
  public:
    std::map< std::vector<int>, int > get_spin_permutations( const std::vector<int>& indices );
};

//===========================================================================================================================================================

class Fourpdm_permutations : public Npdm_permutations {
  public:
    std::map< std::vector<int>, int > get_spin_permutations( const std::vector<int>& indices );
    void get_even_and_odd_perms(const std::vector<int> mnpq, std::vector< std::vector<int> > & even_perms, std::vector< std::vector<int> > & odd_perms);
};

//===========================================================================================================================================================

}

#endif
