/**
 * Copyright 2011-2013 - Reliable Bits Software by Blommers IT. All Rights Reserved.
 * Author Rick Blommers
 */

#pragma once

#include "util/test.h"

namespace edbee {

class CascadingQVariantMap;

/// For testing the QVariantMap
class CascadingQVariantMapTest : public edbee::test::TestCase
{
Q_OBJECT

private slots:

    void testValue();


private:
    CascadingQVariantMap* createFixture();
    void destroyFixture( CascadingQVariantMap* item );

};

} // edbee

DECLARE_TEST(edbee::CascadingQVariantMapTest);
