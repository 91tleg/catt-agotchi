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
    catt->hunger = 50;
    catt->fein = 50;
    catt->unwellness = 50;
}

void catt_stat_decrease( catt_t * catt )
{
    assert( catt != NULL );
    catt->hunger = clamp( catt->hunger - 5 , 0, 100 );
    catt->fein = clamp( catt->fein - 5 , 0, 100 );
    catt->unwellness = clamp( catt->unwellness - 5 , 0, 100 );
}

void catt_give_milk( catt_t * catt )
{
    assert( catt != NULL );
    catt->hunger = clamp( catt->hunger - 20 , 0 , 100 );
}

void catt_give_vape( catt_t * catt )
{
    assert( catt != NULL );
    catt->fein = clamp( catt->fein - 20 , 0 , 100 );
}

void catt_give_meds( catt_t * catt )
{
    assert( catt != NULL );
    catt->unwellness = clamp( catt->unwellness - 20 , 0 , 100 );
}
