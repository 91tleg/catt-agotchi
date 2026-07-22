#include "display.h"

static TFT_t dev;

//#define BAR_WIDTH
//#define BAR_HEIGHT

#define SCREEN_WIDTH  240
#define SCREEN_HEIGHT 300

#define BABY_PINK rgb565( 0xFD , 0xD3 , 0xE4 )
#define FUSCHIA   rgb565( 0xFF , 0x00 , 0xFF )

void display_init( display_pins_t pins )
{
    spi_master_init( &dev , pins.mosi , pins.sclk , pins.cs , pins.dc , pins.reset , pins.bl );
    lcdInit( &dev , SCREEN_WIDTH , SCREEN_HEIGHT , 0 , 0 );
}

void display_render( catt_t * catt , display_icon_t icon )
{
    lcdFillScreen( &dev , BABY_PINK );
    // ...
}
