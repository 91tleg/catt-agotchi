#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "buttons.h"

#define TAG "Main"

static button_t left = { .pin = GPIO_NUM_4 };

void app_main(void)
{
    button_init(&left);
    for(;;) {
        if(button_is_pressed(&left)) {
            ESP_LOGI(TAG, "Button pressed");
        }

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
