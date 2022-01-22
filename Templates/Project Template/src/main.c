
#include "main.h"
#include "SystemInit.h"

#include "stm32wbxx_hal_uart.h"
#include "stm32wbxx_hal_uart_ex.h"

#include "HatronicCore.h"

#include "stdio.h"

static char aTxBuffer[100];

int main(void) {
    SystemInit_Init();
    
    sprintf(aTxBuffer, "Using Hatronic Core v%u.%u.%u.%u\n\r", HATRONIC_CORE_VERSION_MAJOR, HATRONIC_CORE_VERSION_MINOR, HATRONIC_CORE_VERSION_PATCH, HATRONIC_CORE_VERSION_TWEAK);

    if(HAL_UART_Transmit(&gUart1, (uint8_t*)aTxBuffer, sizeof(aTxBuffer), 5000)!= HAL_OK)
    {
        Error_Handler(); 
    }

    return 0;
}
