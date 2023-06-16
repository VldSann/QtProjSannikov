#include "Enclave_SVS_t.h"
#include <string.h>
#include "sgx_trts.h"

const int db_size = 7;
const char* db_arr[db_size] = { "Skate", "Bike", "Car", "Bus", "Electrobus", "Plane", "Ship" };
const char error[] = "Element does not exist!";

void get_elem(char* buffer, int len, int index) {

    if (index >= db_size) {
        memcpy(buffer, error, strlen(error));
    }
    else
    {
        memcpy(buffer, db_arr[index], strlen(db_arr[index]));
    }

}
