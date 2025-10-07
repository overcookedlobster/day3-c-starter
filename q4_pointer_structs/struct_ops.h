#ifndef STRUCT_OPS_H
#define STRUCT_OPS_H

typedef struct {
    int id;
    float temperature;
    char status[20];
} Sensor;

/**
 * Initializes a sensor struct with ID and temperature.
 * @param sensor_ptr Pointer to Sensor to initialize
 * @param id Sensor ID
 * @param temp Temperature value
 */
void initialize_sensor(Sensor *sensor_ptr, int id, float temp);

/**
 * Updates the status string of a sensor.
 * @param sensor_ptr Pointer to Sensor
 * @param new_status New status string
 */
void update_status(Sensor *sensor_ptr, const char *new_status);

/**
 * Returns the ID of the sensor.
 * @param sensor_ptr Pointer to Sensor
 * @return Sensor ID
 */
int get_sensor_id(Sensor *sensor_ptr);

#endif

