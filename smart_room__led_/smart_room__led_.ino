
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial  // digunakan untuk monitor blynk di serial


#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "W1OOzbIXXnSySuE8nxr3ngnSffqPB-pr"; // kode yang dikirim dari blynk ke email

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "abcd";
char pass[] = "ugiugiuaa";

void setup() // fungsi utama, dijalankan sekali
{
  // Debug console
  Serial.begin(9600); // untuk monitor di serail println

  Blynk.begin(auth, ssid, pass); // menjalankan bly k sesuai token, wifi dan passwordnya
}

void loop() // fungsi utama dijalankan berulang kali
{
  Blynk.run(); // perintah untuk menjalankan blynk
}
