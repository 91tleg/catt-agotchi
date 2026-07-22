#include "catt.h"
#include <assert.h>
#include "stddef.h"

static uint8_t clamp( uint8_t val , uint8_t min , uint8_t max )
{
    if ( val < min ) return min;
    if ( val > max ) return max;
    return val;
}

void catt_init( catt_t * catt )
{
    catt->fullness = 50;
    catt->happiness = 50;
    catt->wellness = 50;
}

void catt_stat_decrease( catt_t * catt )
{
    assert( catt != NULL );
    catt->fullness = clamp( catt->fullness - 5 , 0, 100 );
    catt->happiness = clamp( catt->happiness - 5 , 0, 100 );
    catt->wellness = clamp( catt->wellness - 5 , 0, 100 );
}

void catt_give_milk( catt_t * catt )
{
    assert( catt != NULL );
    catt->fullness = clamp( catt->fullness + 20 , 0 , 100 );
}

void catt_give_vape( catt_t * catt )
{
    assert( catt != NULL );
    catt->happiness = clamp( catt->happiness + 20 , 0 , 100 );
}

void catt_give_meds( catt_t * catt )
{
    assert( catt != NULL );
    catt->wellness = clamp( catt->wellness + 20 , 0 , 100 );
}


