// C++ code
//
#include <Servo.h>

int i = 0;

int j = 0;

int k = 0;

int m = 0;

Servo servo_7;

Servo servo_8;

Servo servo_9;

Servo servo_10;

Servo servo_11;

void setup()
{
  servo_7.attach(7, 500, 2500);

  servo_8.attach(8, 500, 2500);

  servo_9.attach(9, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_11.attach(11, 500, 2500);

}

void loop()
{
  for (i = 1; i <= 10; i += 1) {
    servo_7.write(90);
  }
  for (j = 1; j <= 10; j += 1) {
    servo_8.write(90);
  }
  for (m = 1; m <= 10; m += 1) {
    servo_9.write(90);
  }
  for (m = 1; m <= 10; m += 1) {
    servo_10.write(90);
  }
  for (m = 1; m <= 10; m += 1) {
    servo_11.write(90);
  }
  delay(10); // Delay a little bit to improve simulation performance
}