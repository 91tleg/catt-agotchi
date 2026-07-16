# pragma once
#include <stdint.h>

typedef struct
{
    uint8_t hunger;
    uint8_t fein;
    uint8_t unwellness;
} catt_t;

void catt_init( catt_t * catt );

void catt_stat_decrease( catt_t * catt );

void catt_give_milk( catt_t * catt );

void catt_give_vape( catt_t * catt );

void catt_give_meds( catt_t * catt );
