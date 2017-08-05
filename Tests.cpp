//
// Created by marta on 04.08.17.
//


#include "TestedClass.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Test

#include <iostream>

#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_CASE( testKonstr )
{
   TestedClass *kk = new TestedClass();
    BOOST_CHECK_EQUAL( kk->getI(), 2); //Should not be passed
    BOOST_CHECK_EQUAL( kk->getI(), 1); //Should be passed
    delete kk;
}


