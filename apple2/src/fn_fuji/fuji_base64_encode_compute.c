#include <stdint.h>

#include "fujinet-fuji.h"
#include "fujinet-bus-apple2.h"

bool fuji_base64_encode_compute()
{
    // send CTRL command: 0xCF
    // PAYLOAD: N/A

    return sp_control(0, 0xCF) == 0;
}
