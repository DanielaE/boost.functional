
// Copyright 2005-2009 Daniel James.
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/config.hpp>
#include <boost/static_assert.hpp>

template <class T>
void compile_time_tests(T*)
{
    BOOST_STATIC_ASSERT(true);
}

